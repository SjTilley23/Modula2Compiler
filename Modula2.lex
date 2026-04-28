%{
    #include <stdio.h>
    #include "tokens.h"
%}

%%
"AND"            { return TOKEN_AND; }
"ARRAY"          { return TOKEN_ARRAY; }
"BEGIN"          { return TOKEN_BEGIN; }
"BY"             { return TOKEN_BY; }
"CONST"          { return TOKEN_CONST; }
"DEFINITION"     { return TOKEN_DEFINITION; }
"DIV"            { return TOKEN_DIV; }
"DO"             { return TOKEN_DO; }
"ELSE"           { return TOKEN_ELSE; }
"ELSIF"          { return TOKEN_ELSIF; }
"END"            { return TOKEN_END; }
"EXIT"           { return TOKEN_EXIT; }
"FOR"            { return TOKEN_FOR; }
"IF"             { return TOKEN_IF; }
"IMPLEMENTATION" { return TOKEN_IMPLEMENTATION; }
"MOD"            { return TOKEN_MOD; }
"MODULE"         { return TOKEN_MODULE; }
"NOT"            { return TOKEN_NOT; }
"OF"             { return TOKEN_OF; }
"OR"             { return TOKEN_OR; }
"PROCEDURE"      { return TOKEN_PROCEDURE; }
"READ"           { return TOKEN_READ; }
"REPEAT"         { return TOKEN_REPEAT; }
"RETURN"         { return TOKEN_RETURN; }
"THEN"           { return TOKEN_THEN; }
"TO"             { return TOKEN_TO; }
"TYPE"           { return TOKEN_TYPE; }
"UNTIL"          { return TOKEN_UNTIL; }
"VAR"            { return TOKEN_VAR; }
"WHILE"          { return TOKEN_WHILE; }
"WRITE"          { return TOKEN_WRITE; }
"WRITELN"        { return TOKEN_IDENT; }
"<>"             { return TOKEN_LREQ; }
"<="             { return TOKEN_LEQ; }
">="             { return TOKEN_REQ; }
"="              { return '='; }
"!"              { return '!'; }
"$"              { return '$'; }
"%"              { return '%'; }
"&"              { return '&'; }
"("              { return '('; }
")"              { return ')'; }
"*"              { return '*'; }
"+"              { return '+'; }
","              { return ','; }
"-"              { return '-'; }
"."              { return '.'; }
":"              { return ':'; }
";"              { return ';'; }
"<"              { return '<'; }
">"              { return '>'; }
"?"              { return '?'; }
"@"              { return '@'; }
"["              { return '['; }
"\\"             { return TOKEN_DOUBLEBACK; }
"]"              { return ']'; }
"^"              { return '^'; }
"_"              { return '_'; }
"`"              { return '`'; }
"{"              { return '{'; }
"|"              { return '|'; }
"}"              { return '}'; }
"~"              { return '~'; }
".."             { return TOKEN_DOUBLEDOT; }
":="             { return TOKEN_ASSIGN; }

\"([^\\\"\n]|\\.)*\"    { return TOKEN_STRING; }
\'([^\\\'\n]|\\.)*\'    { return TOKEN_STRING; }

[[:alpha:]][[:alnum:]]* {
    return TOKEN_IDENT;}

[0-9]+ {
    return TOKEN_INTEGER;
}
%%

int yywrap() {
    return 1;
}
