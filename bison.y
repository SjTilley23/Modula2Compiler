%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "ast.h"
    Node* root;
    int yylex(void);
    void yyerror(const char *s);
%}

%token TOKEN_AND
%token TOKEN_ARRAY
%token TOKEN_BEGIN
%token TOKEN_BY
%token TOKEN_CONST
%token TOKEN_DEFINITION
%token TOKEN_DIV
%token TOKEN_DO
%token TOKEN_ELSE
%token TOKEN_ELSIF
%token TOKEN_END
%token TOKEN_EXIT
%token TOKEN_FOR
%token TOKEN_IF
%token TOKEN_IMPLEMENTATION
%token TOKEN_MOD
%token TOKEN_MODULE
%token TOKEN_NOT
%token TOKEN_OF
%token TOKEN_OR
%token TOKEN_PROCEDURE
%token TOKEN_READ
%token TOKEN_REPEAT
%token TOKEN_RETURN
%token TOKEN_THEN
%token TOKEN_TO
%token TOKEN_TYPE
%token TOKEN_UNTIL
%token TOKEN_VAR
%token TOKEN_WHILE
%token TOKEN_WRITE
%token TOKEN_DOUBLEBACK
%token TOKEN_LREQ
%token TOKEN_LEQ
%token TOKEN_REQ
%token TOKEN_DOUBLEDOT
%token TOKEN_ASSIGN
%token TOKEN_WRITELN
%token <node> TOKEN_IDENT
%token <node> TOKEN_INTEGER
%token <node> TOKEN_STRING
%start cU


%union {
    struct Node* node;
}
%type <node> cE R scE aO cT mO cF cD
%type <node> tD T sT eN iL sbT aT pT ftL oV orT fT ofL foT fL aD vD
%type <node> D dT eL eL_tail E opt_R_sE sE opt_sign sE_tail tM tM_tail F dpC opt_aP aP opt_eL S opt_S ioS io_read_tail io_write_tail opt_E
%type <node> apC opt_apC sS sS_tail ifS ifS_elsif ifS_else wS rS fS opt_by
%type <node> pD pH opt_fp B opt_begin_block dC dC_list cD_list tD_list vD_list
%type <node> fP opt_return_type opt_fpS_list fpS fpS_tail opt_var mD P
%type <node> dM dF_list dF cD_listY type_list type_entry opt_type_def vD_listY pM opt_IMPL cU opt_P opt_dT

%%

cD:
    TOKEN_IDENT '=' cE      { $$ = makeNode("=", $1, $3); }
;

cE:
    scE                     { $$ = $1; }
    | scE R scE             { $$ = makeNode($2->label, $1, $3); }
;

R:
    '='                     { $$ = makeLeaf("="); }
    | TOKEN_LREQ            { $$ = makeLeaf("LREQ"); }
    | TOKEN_LEQ             { $$ = makeLeaf("LEQ"); }
    | TOKEN_REQ             { $$ = makeLeaf("REQ"); }
    | '>'                   { $$ = makeLeaf(">"); }
    | '<'                   { $$ = makeLeaf("<"); }
;

scE:
      cT                    { $$ = $1; }
    | '+' cT                { $$ = makeNode("+u", NULL, $2); }
    | '-' cT                { $$ = makeNode("-u", NULL, $2); }
    | scE aO cT             { $$ = makeNode($2->label, $1, $3); }
;

aO:
    '+'                     { $$ = makeLeaf("+"); }
    | '-'                   { $$ = makeLeaf("-"); }
    | TOKEN_OR              { $$ = makeLeaf("OR"); }
;

cT:
    cF                      { $$ = $1; }
    | cT mO cF              { $$ = makeNode($2->label, $1, $3); }
;

mO:
    '*'                     { $$ = makeLeaf("*"); }
    | '/'                   { $$ = makeLeaf("/"); }
    | TOKEN_DIV             { $$ = makeLeaf("DIV"); }
    | TOKEN_MOD             { $$ = makeLeaf("MOD"); }
    | TOKEN_AND             { $$ = makeLeaf("AND"); }
    | '&'                   { $$ = makeLeaf("&"); }
;

cF:
    TOKEN_INTEGER           { $$ = $1; }
    | TOKEN_STRING          { $$ = $1; }
    | '(' cE ')'            { $$ = $2; }
    | TOKEN_NOT cF          { $$ = makeNode("NOT", NULL, $2); }
    | '~' cF                { $$ = makeNode("NOT", NULL, $2); }
;

tD:
    TOKEN_IDENT '=' T       { $$ = makeNode("=", $1, $3); root = $$; }
;

T:
    sT                      { $$ = $1; }
    | aD                    { $$ = $1; }
    | pT                    { $$ = $1; }
;

sT:
    TOKEN_IDENT             { $$ = $1; }
    | eN                    { $$ = $1; }
    | sbT                   { $$ = $1; }
;

eN:
    '(' iL ')'              { $$ = $2; }
;

iL:
    TOKEN_IDENT             { $$ = $1; }
    | iL ',' TOKEN_IDENT    { $$ = makeNode("LIST", $1, $3); }
;

sbT:
    '[' cE TOKEN_DOUBLEDOT cE ']'   { $$ = makeNode("..", $2, $4); }
;

aD:
    TOKEN_ARRAY sT aT TOKEN_OF T    { $$ = makeNode("ARRAY", $2, makeNode("OF", $3, $5)); }
;

aT:
                                    { $$ = NULL; }
    | ',' sT aT                     { $$ = makeNode("List", $2, $3); }
;

pT:
    TOKEN_PROCEDURE                 { $$ = makeLeaf("PROCEDURE"); }
    | TOKEN_PROCEDURE ftL           { $$ = makeNode("ftL", NULL, makeLeaf("PROCEDURE")); }
;

ftL: 
    '(' ofL ')' orT                 { $$ = makeNode("ftL", $2, $4); }
;

ofL:
                                    { $$ = NULL; }
    | fL                            { $$ = $1; }
;

fL: 
    oV fT foT                        { $$ = makeNode("PARAMS", $2, $3); }
;

foT:
                                    { $$ = NULL; }
    | ',' oV fT foT                 { $$ = makeNode(",", $3, $4); }
;

oV: 
    TOKEN_VAR                       { $$ = makeLeaf("VAR"); }
    |                               { $$ = NULL; }
;

orT:
                                    { $$ = NULL; }
    | ':' TOKEN_IDENT               { $$ = makeNode("RET", $2, NULL); }
;


vD:
    iL ':' T                        { $$ = makeNode(":", $1, $3); }
;

fT:
    TOKEN_ARRAY TOKEN_OF TOKEN_IDENT { $$ = makeNode("OF", makeLeaf("ARRAY"), $3); }
;

D:
    TOKEN_IDENT                     { $$ = $1; }
    |  TOKEN_IDENT dT               { $$ = makeNode("D", $1, $2); }
;

dT:
      '[' eL ']' dT                 { $$ = makeNode("dT", $2, $4); }
    | '[' eL ']'                    { $$ = makeNode("dT", $2, NULL); }
;

eL:
    E eL_tail                       { $$ = makeNode("eL", $1, $2); }
;

eL_tail:
      /* empty */                   { $$ = NULL; }
    | ',' E eL_tail                 { $$ = makeNode(",", $2, $3); }
;

E:
    sE opt_R_sE                     { $$ = makeNode("E", $1, $2); }
;

opt_R_sE:
      /* empty */                   { $$ = NULL; }
    | R sE                          { $$ = makeNode($1->label, $2, NULL); }
;

sE:
      opt_sign tM sE_tail           { $$ = makeNode("sE", $2, $3); }
;

opt_sign:
      '+'                           { $$ = makeLeaf("+u"); }
    | '-'                           { $$ = makeLeaf("-u"); }
    | /* empty */                   { $$ = NULL; }
;

sE_tail:
      /* empty */                   { $$ = NULL; }
    | aO tM sE_tail                 { $$ = makeNode($1->label, $2, $3); }
;

tM:
    F tM_tail                       { $$ = makeNode("tM", $1, $2); }
;

tM_tail:
      /* empty */                   { $$ = NULL; }
    | mO F tM_tail                  { $$ = makeNode($1->label, $2, $3); }
;

F:
      TOKEN_INTEGER                 { $$ = makeLeaf("INT"); }
    | TOKEN_STRING                  { $$ = makeLeaf("STRING"); }
    | dpC                           { $$ = $1; }
    | '(' E ')'                     { $$ = $2; }
    | TOKEN_NOT F                   { $$ = makeNode("NOT", NULL, $2); }
    | '~' F                         { $$ = makeNode("NOT", NULL, $2); }
;

dpC:
    TOKEN_IDENT opt_dT opt_aP       { $$ = makeNode("dpC", $1, makeNode("ARGS", $2, $3)); }
;

opt_dT:
      /* empty */                   { $$ = NULL; }
    | dT                            { $$ = $1; }
;

opt_aP:
      /* empty */                   { $$ = NULL; }
    | aP                            { $$ = $1; }
;

aP:
    '(' opt_eL ')'                  { $$ = $2; }
;

opt_eL:
      /* empty */                   { $$ = NULL; }
    | eL                            { $$ = $1; }
;

S:
      opt_S                         { $$ = $1; }
;

opt_S:
      /* empty */                   { $$ = NULL; }
    | apC                           { $$ = $1; }
    | ifS                           { $$ = $1; }
    | ioS                           { $$ = $1; }
    | wS                            { $$ = $1; }
    | rS                            { $$ = $1; }
    | fS                            { $$ = $1; }
    | TOKEN_EXIT                    { $$ = makeLeaf("EXIT"); }
    | TOKEN_RETURN opt_E            { $$ = makeNode("RETURN", $2, NULL); }
;

opt_E:
      /* empty */                   { $$ = NULL; }
    | E                             { $$ = $1; }
;

ioS:
      TOKEN_READ '(' D io_read_tail ')'     { $$ = makeNode("READ", $3, $4); }
    | TOKEN_WRITE '(' E io_write_tail ')'   { $$ = makeNode("WRITE", $3, $4); }
;

io_read_tail:
      /* empty */                   { $$ = NULL; }
    | ',' D io_read_tail            { $$ = makeNode(",", $2, $3); }
;

io_write_tail:
      /* empty */                   { $$ = NULL; }
    | ',' E io_write_tail           { $$ = makeNode(",", $2, $3); }
;

apC:
    D opt_apC                       { $$ = makeNode("apC", $1, $2); }
;

opt_apC:
      TOKEN_ASSIGN E                { $$ = makeNode("ASSIGN", $2, NULL); }
    | aP                            { $$ = $1; }
    | /* empty */                   { $$ = NULL; }
;

sS:
    S sS_tail                       { $$ = makeNode("sS", $1, $2); }
;

sS_tail:
      /* empty */                   { $$ = NULL; }
    | ';' S sS_tail                 { $$ = makeNode(";", $2, $3); }
;

ifS:
    TOKEN_IF E TOKEN_THEN sS ifS_elsif ifS_else TOKEN_END   { $$ = makeNode("IF", $2, makeNode("THEN", $4, makeNode("REST", $5, $6))); }
;

ifS_elsif:
      /* empty */                               { $$ = NULL; }
    | TOKEN_ELSIF E TOKEN_THEN sS ifS_elsif     { $$ = makeNode("ELSIF", $2, makeNode("THEN", $4, $5)); }
;

ifS_else:
      /* empty */                               { $$ = NULL; }
    | TOKEN_ELSE sS                             { $$ = makeNode("ELSE", $2, NULL); }
;

wS:
    TOKEN_WHILE E TOKEN_DO sS TOKEN_END         { $$ = makeNode("WHILE", $2, $4); }
;

rS:
    TOKEN_REPEAT sS TOKEN_UNTIL E               { $$ = makeNode("REPEAT", $2, $4); }
;

fS:
    TOKEN_FOR TOKEN_IDENT TOKEN_ASSIGN E TOKEN_TO E opt_by TOKEN_DO sS TOKEN_END    { $$ = makeNode("FOR", $2, makeNode("RANGE", $4, makeNode("TO", $6, makeNode("BODY", $7, $9)))); }
;

opt_by:
      /* empty */                   { $$ = NULL; }
    | TOKEN_BY cE                   { $$ = makeNode("BY", $2, NULL); }
;

pD:
    pH ';' B TOKEN_IDENT            { $$ = makeNode("pD", $1, makeNode(";", $3, $4)); }
;

pH:
    TOKEN_PROCEDURE TOKEN_IDENT opt_fp  { $$ = makeNode("PROCEDURE", $2, $3); }
;

opt_fp:
      /* empty */                   { $$ = NULL; }
    | fP                            { $$ = $1; }
;

B:
    dC_list opt_begin_block TOKEN_END   { $$ = makeNode("B", $1, $2); }
;

opt_begin_block:
      /* empty */                   { $$ = NULL; }
    | TOKEN_BEGIN sS                { $$ = makeNode("BEGIN", $2, NULL); }
;

dC_list:
      /* empty */                   { $$ = NULL; }
    | dC_list dC                    { $$ = makeNode("dC_LIST", $1, $2); }
;

dC:
      TOKEN_CONST cD_list           { $$ = makeNode("CONST", $2, NULL); }
    | TOKEN_TYPE tD_list            { $$ = makeNode("TYPE", $2, NULL); }
    | TOKEN_VAR vD_list             { $$ = makeNode("VAR", $2, NULL); }
    | pD ';'                        { $$ = makeNode("pD;", $1, NULL); }
    | mD ';'                        { $$ = makeNode("mD;", $1, NULL); }
;

cD_list:
      /* empty */                   { $$ = NULL; }
    | cD_list cD ';'                { $$ = makeNode("cD", $2, $1); }
;

tD_list:
      /* empty */                   { $$ = NULL; }
    | tD_list tD ';'                { $$ = makeNode("tD", $2, $1); }
;

vD_list:
      /* empty */                   { $$ = NULL; }
    | vD_list vD ';'                { $$ = makeNode("vD", $2, $1); }
;

fP:
    '(' opt_fpS_list ')' opt_return_type    { $$ = makeNode("fP", $2, $4); }
;

opt_return_type:
      /* empty */                   { $$ = NULL; }
    | ':' TOKEN_IDENT               { $$ = makeNode("RET", NULL, $2); }
;

opt_fpS_list:
      /* empty */                   { $$ = NULL; }
    | fpS fpS_tail                  { $$ = makeNode("fpS_LIST", $1, $2); }
;

fpS_tail:
      /* empty */                   { $$ = NULL; }
    | ';' fpS fpS_tail              { $$ = makeNode(";", $2, $3); }
;

fpS:
    opt_var iL ':' fT               { $$ = makeNode("fpS", $2, $4); }
;

opt_var:
      /* empty */                   { $$ = NULL; }
    | TOKEN_VAR                     { $$ = makeLeaf("VAR"); }
;

mD:
    TOKEN_MODULE TOKEN_IDENT opt_P ';' B TOKEN_IDENT    { $$ = makeNode("MODULE", $2, makeNode("BODY", $3, $6)); }
;

P:
    '[' cE ']'                      { $$ = makeNode("P", $2, NULL); }
;

dM:
    TOKEN_DEFINITION TOKEN_MODULE TOKEN_IDENT ';' dF_list TOKEN_END TOKEN_IDENT '.' { $$ = makeNode("dM", $3, makeNode("BODY", $5, $7)); }
;

dF_list:
      /* empty */                   { $$ = NULL; }
    | dF_list dF                    { $$ = makeNode("dF_LIST", $1, $2); }
;

dF:
      TOKEN_CONST cD_listY           { $$ = makeNode("CONST", $2, NULL); }
    | TOKEN_TYPE type_list          { $$ = makeNode("TYPE", $2, NULL); }
    | TOKEN_VAR vD_listY             { $$ = makeNode("VAR", $2, NULL); }
    | pH ';'                        { $$ = makeNode("pH;", $1, NULL); }
;

cD_listY:
      /* empty */                   { $$ = NULL; }
    | cD_listY cD ';'                { $$ = makeNode("cD", $2, $1); }
;

type_list:
      /* empty */                   { $$ = NULL; }
    | type_list type_entry          { $$ = makeNode("TYPE_ENTRY", $1, $2); }
;

type_entry:
    TOKEN_IDENT opt_type_def ';'    { $$ = makeNode("TYPE_DEF", $1, $2); }
;

opt_type_def:
      /* empty */                   { $$ = NULL; }
    | '=' T                         { $$ = makeNode("=", $2, NULL); }
;

vD_listY:
      /* empty */                   { $$ = NULL; }
    | vD_listY vD ';'                { $$ = makeNode("vD", $2, $1); }
;

pM:
    TOKEN_MODULE TOKEN_IDENT opt_P ';' B TOKEN_IDENT '.'    { $$ = makeNode("pM", $2, makeNode("BODY", $3, $6)); }
;

cU:
      dM                            { $$ = $1; }
    | opt_IMPL pM                   { $$ = $2; }
;

opt_IMPL:
      /* empty */                   { $$ = NULL; }
    | TOKEN_IMPLEMENTATION          { $$ = makeLeaf("IMPLEMENTATION"); }
;

opt_P:
      /* empty */                   { $$ = NULL; }
    | P                             { $$ = $1; }
;


%%

void yyerror(const char* s) {
    fprintf(stderr, "Parse error: %s\n", s);
}

void printTree(Node* root, int depth) {
    int i;

    if (root == NULL) {
        return;
    }

    printTree(root->right, depth + 4);

    for (i = 0; i < depth; i++) {
        printf(" ");
    }
    printf("%s\n", root->label);

    printTree(root->left, depth + 4);
}



int main(void) {
    Node* root = NULL;

    if (yyparse() == 0) {
        printf("Parse successful\n");
        printTree(root, 0);
    }

    return 0;
}


