#include "lex.h"
#include "parse.h"
#include "run.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void print_tokens(const struct token *const tokens,
    const size_t ntokens, const int error)
{
    for (size_t i = 0, alternate = 0; i < ntokens; ++i) {
        const struct token token = tokens[i];

        if (token.tk == TK_FBEG || token.tk == TK_FEND) {
            continue;
        }

        if (token.tk != TK_WSPC && token.tk != TK_LCOM && token.tk != TK_BCOM) {
            alternate++;
        }

        const int len = token.end - token.beg;

        if (i == ntokens - 1 && error == LEX_UNKNOWN_TOKEN) {
            printf(RED("%.*s") CYAN("< Unknown token\n"), len ?: 1, token.beg);
        } else if (token.tk == TK_LCOM || token.tk == TK_BCOM) {
            printf(GRAY("%.*s"), len, token.beg);
        } else if (alternate % 2) {
            printf(GREEN("%.*s"), len, token.beg);
        } else {
            printf(YELLOW("%.*s"), len, token.beg);
        }
    }
}

void	debug_print_tokens(char *buffer, struct token *tokens, int size)
{
	printf("\nBUFFER: [%s]\n\n", buffer);
	printf("%10s \t\t %10s \t\t\t %10s\n\n", "beg", "end", "tk");
	for(int i = 0; i < size; i++)
	{
		printf("[%20s] \t [%20s] \t [%20d]\n", tokens[i].beg, tokens[i].end, tokens[i].tk);
	}
}

int main(int argc, char **argv)
{
    int fd;
    size_t size;
    struct stat statbuf;
    int exit_status = EXIT_FAILURE;

    if (argc != 2) {
        return fprintf(stderr, "Usage: %s <file>\n", argv[0]), exit_status;
    }

    if ((fd = open(argv[1], O_RDONLY)) < 0) {
        return perror("open"), exit_status;
    }

    if (fstat(fd, &statbuf) < 0) {
        return perror("fstat"), close(fd), exit_status;
    }

    if ((size = statbuf.st_size) == 0) {
        fprintf(stderr, "‘%s‘: file is empty\n", argv[1]);
        return close(fd), exit_status;
    }

	/*
	 * Projection en memoire du fd commencant a l'adresse 0 sur une taille size
	 * uint8_t == void *
	 * mapped == ptr
	 */
    const uint8_t *const mapped = mmap(0, size, PROT_READ, MAP_PRIVATE, fd, 0);

    if (mapped == MAP_FAILED) {
        return perror("mmap"), close(fd), exit_status;
    }

    puts(WHITE("*** Lexing ***"));

    /*
     *	const uint8_t *beg, *end;
     *	tk_t tk;
     */
    struct token *tokens;
    size_t ntokens;
    const int lex_error = lex(mapped, size, &tokens, &ntokens);
	debug_print_tokens((char*)mapped, tokens, ntokens);

    if (!lex_error || lex_error == LEX_UNKNOWN_TOKEN) {
        print_tokens(tokens, ntokens, lex_error);
    } else if (lex_error == LEX_NOMEM) {
        puts(RED("The lexer could not allocate memory."));
    }

    if (!lex_error) {
        puts(WHITE("\n*** Parsing ***"));
        const struct node root = parse(tokens, ntokens);

        if (!parse_error(root)) {
            puts(WHITE("\n*** Running ***"));
            run(&root);
            destroy_tree(root);
            exit_status = EXIT_SUCCESS;
        }
    }

    free(tokens);
    munmap((uint8_t *const) mapped, size);
    close(fd);
    return exit_status;
}
