%{
    #include <stdio.h>

    enum {
        TOKEN_THE,
        TOKEN_NOUN,
        TOKEN_VERB,
        TOKEN_ADVERB,
        TOKEN_PUNCTUATION
    };
%}

%%
[0-9] {printf("TOKEN:The value: %s\n", yytext);
        return TOKEN_THE;}
%%

int yywrap(){}
int main(int argc, char**argv) {
    if(argc>1) {
        if(!(yyin=fopen(argv[1], "r"))) {
            perror(argv[1]);
            return 1;
        }
    }
    while(yylex());
}