#include <stdio.h>
#include "y.tab.h"

extern int yylex(void);
extern char *yytext;
extern FILE *yyin;

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s file\n", argv[0]);
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) { perror("fopen"); return 1; }
    int t;
    while ((t = yylex()) != 0) {
        printf("%d\t%s\n", t, yytext ? yytext : "");
    }
    return 0;
}

/* Stubs required by lex.yy.c */
char buff[2048];
int mode = -1;
void yyerror(const char *s) { fprintf(stderr, "yyerror: %s\n", s); }
