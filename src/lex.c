#include "lex.h"

#include <stdio.h>
#include <stdlib.h>

enum {
    STS_ACCEPT,
    STS_REJECT,
    STS_HUNGRY,
};

typedef uint8_t sts_t;

#define TR(st, tr) (*s = (st), (STS_##tr))
#define REJECT TR(0, REJECT)

#define IS_ALPHA(c)  (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z'))
#define IS_DIGIT(c)  ((c) >= '0' && (c) <= '9')
#define IS_ALNUM(c)  (IS_ALPHA(c) || IS_DIGIT(c))
#define IS_WSPACE(c) ((c) == ' ' || (c) == '\t' || (c) == '\r' || (c) == '\n')

#define TOKEN_DEFINE_1(token, str) \
static sts_t token(const uint8_t c, uint8_t *const s) \
{ \
    switch (*s) { \
    case 0: return c == (str)[0] ? TR(1, ACCEPT) : REJECT; \
    case 1: return REJECT; \
    default: abort(); \
    } \
}

#define TOKEN_DEFINE_2(token, str) \
static sts_t token(const uint8_t c, uint8_t *const s) \
{ \
    switch (*s) { \
    case 0: return c == (str)[0] ? TR(1, HUNGRY) : REJECT; \
    case 1: return c == (str)[1] ? TR(2, ACCEPT) : REJECT; \
    case 2: return REJECT; \
    default: abort(); \
    } \
}

#define TOKEN_DEFINE_3(token, str) \
static sts_t token(const uint8_t c, uint8_t *const s) \
{ \
    switch (*s) { \
    case 0: return c == (str)[0] ? TR(1, HUNGRY) : REJECT; \
    case 1: return c == (str)[1] ? TR(2, HUNGRY) : REJECT; \
    case 2: return c == (str)[2] ? TR(3, ACCEPT) : REJECT; \
    case 3: return REJECT; \
    default: abort(); \
    } \
}

#define TOKEN_DEFINE_4(token, str) \
static sts_t token(const uint8_t c, uint8_t *const s) \
{ \
    switch (*s) { \
    case 0: return c == (str)[0] ? TR(1, HUNGRY) : REJECT; \
    case 1: return c == (str)[1] ? TR(2, HUNGRY) : REJECT; \
    case 2: return c == (str)[2] ? TR(3, HUNGRY) : REJECT; \
    case 3: return c == (str)[3] ? TR(4, ACCEPT) : REJECT; \
    case 4: return REJECT; \
    default: abort(); \
    } \
}

#define TOKEN_DEFINE_5(token, str) \
static sts_t token(const uint8_t c, uint8_t *const s) \
{ \
    switch (*s) { \
    case 0: return c == (str)[0] ? TR(1, HUNGRY) : REJECT; \
    case 1: return c == (str)[1] ? TR(2, HUNGRY) : REJECT; \
    case 2: return c == (str)[2] ? TR(3, HUNGRY) : REJECT; \
    case 3: return c == (str)[3] ? TR(4, HUNGRY) : REJECT; \
    case 4: return c == (str)[4] ? TR(5, ACCEPT) : REJECT; \
    case 5: return REJECT; \
    default: abort(); \
    } \
}

static sts_t tk_name(const uint8_t c, uint8_t *const s)
{
    enum {
        tk_name_begin,
        tk_name_accum,
    };

    switch (*s) {
    case tk_name_begin:
        return IS_ALPHA(c) || (c == '_') ? TR(tk_name_accum, ACCEPT) : REJECT;

    case tk_name_accum:
        return IS_ALNUM(c) || (c == '_') ? STS_ACCEPT : REJECT;
    }

    abort();
}

static sts_t tk_nmbr(const uint8_t c, uint8_t *const s)
{
    return IS_DIGIT(c) ? STS_ACCEPT : STS_REJECT;
}

static sts_t tk_strl(const uint8_t c, uint8_t *const s)
{
    enum {
        tk_strl_begin,
        tk_strl_accum,
        tk_strl_end,
    };

    switch (*s) {
    case tk_strl_begin:
        return c == '"' ? TR(tk_strl_accum, HUNGRY) : REJECT;

    case tk_strl_accum:
        return c != '"' ? STS_HUNGRY : TR(tk_strl_end, ACCEPT);

    case tk_strl_end:
        return REJECT;
    }

    abort();
}

static sts_t tk_wspc(const uint8_t c, uint8_t *const s)
{
    enum {
        tk_wspc_begin,
        tk_wspc_accum,
    };

    switch (*s) {
    case tk_wspc_begin:
        return IS_WSPACE(c) ? TR(tk_wspc_accum, ACCEPT) : REJECT;

    case tk_wspc_accum:
        return IS_WSPACE(c) ? STS_ACCEPT : REJECT;
    }

    abort();
}

static sts_t tk_lcom(const uint8_t c, uint8_t *const s)
{
    enum {
        tk_lcom_begin,
        tk_lcom_first_slash,
        tk_lcom_accum,
        tk_lcom_end
    };

    switch (*s) {
    case tk_lcom_begin:
        return c == '/' ? TR(tk_lcom_first_slash, HUNGRY) : REJECT;

    case tk_lcom_first_slash:
        return c == '/' ? TR(tk_lcom_accum, HUNGRY) : REJECT;

    case tk_lcom_accum:
        return c == '\n' || c == '\r' ? TR(tk_lcom_end, ACCEPT) : STS_HUNGRY;

    case tk_lcom_end:
        return REJECT;
    }

    abort();
}

static sts_t tk_bcom(const uint8_t c, uint8_t *const s)
{
    enum {
        tk_bcom_begin,
        tk_bcom_open_slash,
        tk_bcom_accum,
        tk_bcom_close_star,
        tk_bcom_end
    };

    switch (*s) {
    case tk_bcom_begin:
        return c == '/' ? TR(tk_bcom_open_slash, HUNGRY) : REJECT;

    case tk_bcom_open_slash:
        return c == '*' ? TR(tk_bcom_accum, HUNGRY) : REJECT;

    case tk_bcom_accum:
        return c != '*' ? STS_HUNGRY : TR(tk_bcom_close_star, HUNGRY);

    case tk_bcom_close_star:
        return c == '/' ? TR(tk_bcom_end, ACCEPT) : TR(tk_bcom_accum, HUNGRY);

    case tk_bcom_end:
        return REJECT;
    }

    abort();
}

TOKEN_DEFINE_1(tk_lpar, "(")
TOKEN_DEFINE_1(tk_rpar, ")")
TOKEN_DEFINE_1(tk_lbra, "[")
TOKEN_DEFINE_1(tk_rbra, "]")
TOKEN_DEFINE_1(tk_lbrc, "{")
TOKEN_DEFINE_1(tk_rbrc, "}")
TOKEN_DEFINE_2(tk_cond, "if")
TOKEN_DEFINE_4(tk_elif, "elif")
TOKEN_DEFINE_4(tk_else, "else")
TOKEN_DEFINE_2(tk_dowh, "do")
TOKEN_DEFINE_5(tk_whil, "while")
TOKEN_DEFINE_1(tk_assn, "=")
TOKEN_DEFINE_2(tk_equl, "==")
TOKEN_DEFINE_2(tk_neql, "!=")
TOKEN_DEFINE_1(tk_lthn, "<")
TOKEN_DEFINE_1(tk_gthn, ">")
TOKEN_DEFINE_2(tk_lteq, "<=")
TOKEN_DEFINE_2(tk_gteq, ">=")
TOKEN_DEFINE_2(tk_conj, "&&")
TOKEN_DEFINE_2(tk_disj, "||")
TOKEN_DEFINE_1(tk_plus, "+")
TOKEN_DEFINE_1(tk_mins, "-")
TOKEN_DEFINE_1(tk_mult, "*")
TOKEN_DEFINE_1(tk_divi, "/")
TOKEN_DEFINE_1(tk_modu, "%")
TOKEN_DEFINE_1(tk_nega, "!")
TOKEN_DEFINE_5(tk_prnt, "print")
TOKEN_DEFINE_1(tk_scol, ";")
TOKEN_DEFINE_1(tk_ques, "?")
TOKEN_DEFINE_1(tk_coln, ":")

static sts_t (*const token_funcs[TK_COUNT])(const uint8_t, uint8_t *const) = {
    tk_name,
    tk_nmbr,
    tk_strl,
    tk_wspc,
    tk_lcom,
    tk_bcom,
    tk_lpar,
    tk_rpar,
    tk_lbra,
    tk_rbra,
    tk_lbrc,
    tk_rbrc,
    tk_cond,
    tk_elif,
    tk_else,
    tk_dowh,
    tk_whil,
    tk_assn,
    tk_equl,
    tk_neql,
    tk_lthn,
    tk_gthn,
    tk_lteq,
    tk_gteq,
    tk_conj,
    tk_disj,
    tk_plus,
    tk_mins,
    tk_mult,
    tk_divi,
    tk_modu,
    tk_nega,
    tk_prnt,
    tk_scol,
    tk_ques,
    tk_coln,
};

/*
 *	tokens:
 *		const uint8_t *beg, *end;
 *  	tk_t tk; => uint8_t
 */
static inline int push_token(
	struct token **const tokens,
    size_t *const ntokens,
    size_t *const allocated,
    const tk_t token,
    const uint8_t *const beg,
    const uint8_t *const end)
{
    if (*ntokens >= *allocated) {
    	if (*allocated == 0)
    		*allocated = 1;
        *allocated = *allocated * 8;

        struct token *const tmp = realloc(*tokens, *allocated * sizeof(struct token));

        if (!tmp) {
            return free(*tokens), *tokens = NULL, LEX_NOMEM;
        }

        *tokens = tmp;
    }

    (*tokens)[(*ntokens)++] = (struct token) {
        .beg = beg,
        .end = end,
        .tk = token
    };

    return LEX_OK;
}

/*
 *  input:		Ptr sur char* == (*input)
 *  size:		Taille du buffer a analyser
 *  tokens:		Tableau de token
 * 		        struct token {
 *  		        const uint8_t *beg, *end;
 *   		        tk_t tk;
 *		        };
 *  ntokens:	Index pour le tableau de token
 */
int lex(const uint8_t *const input, const size_t size,
    struct token **const tokens, size_t *const ntokens)
{
	/*
	 *	Structure anonyme
	 *	Pour TK_COUNT = 2 alors
	 *	statuses[0].prev = STS_HUNGRY
	 *	statuses[0].curr = STS_REJECT
	 *	statuses[1].prev = STS_HUNGRY
	 *	statuses[1].curr = STS_REJECT
	 */
    static struct {
        sts_t prev;
        sts_t curr;
    } statuses[TK_COUNT] = {
        [0 ... TK_COUNT - 1] = { STS_HUNGRY, STS_REJECT }
    };

	//	Token pour machine a etat
    uint8_t states[TK_COUNT] = {0};

	//	Ptr sur le debut de la chaine
    const uint8_t *prefix_beg = input;
    //	Ptr sur la fin de la chaine
    const uint8_t *prefix_end = input;

    /*
     *  typedef uint8_t tk_t;
     *  Permet de savoir si un token est trouve
     */
    tk_t accepted_token;

    size_t allocated = 0;
    *tokens = NULL;
    *ntokens = 0;

	// Ajout du token TK_FBEG avec debut de la chaine et fin de la chaine
	push_token(tokens, ntokens, &allocated, TK_FBEG, prefix_beg, prefix_end);

	// Tant que le buffer n'est pas totalement parcouru
    while (prefix_end < input + size) {
        int did_accept = 0;

		/*
		 *	Pour chaque token a verifier
		 *	TK_COUNT = 36
		 */
		for (tk_t tk = 0; tk < TK_COUNT; ++tk) {
			//	Si le caractere precedent n'est pas rejeter
            if (statuses[tk].prev != STS_REJECT) {
            	// test du caractere courrant
                statuses[tk].curr = token_funcs[tk](*prefix_end, &states[tk]);
            }

			//	Si le caractere courrant n'est pas rejeter
            if (statuses[tk].curr != STS_REJECT) {
                did_accept = 1;
            }
        }

		//	Si le caractere courrant n'est pas rejeter on passe au caractere suivant
        if (did_accept) {
            prefix_end++;

			//	Pour chaque token a verifier
			for (tk_t tk = 0; tk < TK_COUNT; ++tk) {
				// On place le caractere courrant en tant que previous
                statuses[tk].prev = statuses[tk].curr;
            }
        //	Si le caractere courrant est rejeter
        } else {
        	//	accepted_token == 36
            accepted_token = TK_COUNT;

			//	Pour chaque token a verifier
			for (tk_t tk = 0; tk < TK_COUNT; ++tk) {
				//	Si le caractere precedent est accepte alors accepted_token == index_tk
                if (statuses[tk].prev == STS_ACCEPT) {
                    accepted_token = tk;
                }

                statuses[tk].prev = STS_HUNGRY;
                statuses[tk].curr = STS_REJECT;
            }

			//	Push token TK_COUNT ou index_tk
			push_token(tokens, ntokens, &allocated, accepted_token, prefix_beg, prefix_end);

			//	Si accepted_token == 36 alors on incremente la fin de la derniere structure tokens
            if (accepted_token == TK_COUNT) {
                (*tokens)[*ntokens - 1].end++;
                return LEX_UNKNOWN_TOKEN;
            }

			//	On passe au prochaine token si il existe
            prefix_beg = prefix_end;
        }
    }

	//	accepted_token == 36
    accepted_token = TK_COUNT;

	//	Pour chaque token a verifier
	for (tk_t tk = 0; tk < TK_COUNT; ++tk) {
		//	Si le caractere courrant est accepter alors accepted_token == index_tk
        if (statuses[tk].curr == STS_ACCEPT) {
            accepted_token = tk;
        }

        statuses[tk].prev = STS_HUNGRY;
        statuses[tk].curr = STS_REJECT;
    }

	//	Push token TK_COUNT ou index_tk
	push_token(tokens, ntokens, &allocated, accepted_token, prefix_beg, prefix_end);

	//	Si accepted_token == 36 alors on return car on a pas trouve de token
    if (accepted_token == TK_COUNT) {
        return LEX_UNKNOWN_TOKEN;
    }

	//	Push TK_FEND
	push_token(tokens, ntokens, &allocated, TK_FEND, prefix_beg, prefix_end);
    return LEX_OK;
}
