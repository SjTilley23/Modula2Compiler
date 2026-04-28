#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"

#define SUCCESS 1
#define FAILED 0


/* Declaring The Grammar Functions Before using them. 
Organized into lines based on what "Part" they are in*/
int cD(), cE(), scE(), R(), cT(), aO(), cF(), mO(), cF();
int tD(), T(), siT(), eN(), iL(), sbT(), aT(), pT(), ftL(), vD(), fT();
int D(), dT(), eL(), E(), sE(), tM(), F(), dpC(), aP();
int S(), ioS(), apC(), sS(), ifS(), wS(), rS(), fS();
int pD(), pH(), B(), dC(), fP(), fpS(), mD(), P(), dM(), dF(), pM(), cU();


int yylex(void);
int token;

void nextToken() {  
    if (token != 0) {
        token = yylex();
    }   
}

int match(int expected) {
    if (token == 0) {
        return FAILED;
    }

    if (token == expected) {
        nextToken();
        return SUCCESS;
    }
    return FAILED;
}


/*First Part*/

int cD() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        if (token == '=') {
            match('=');
            if (cE()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int cE() {
    if (scE()) {
        if (R()) {
            if (scE()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return SUCCESS;
    }
    return FAILED;
}

int R() {
    switch (token) {
        case '=':
            match('=');
            return SUCCESS;
            
        case TOKEN_LREQ:
            match(TOKEN_LREQ);
            return SUCCESS;

        case TOKEN_LEQ:
            match(TOKEN_LEQ);
            return SUCCESS;

        case '>':
            match('>');
            return SUCCESS;

        case '<':
            match('<');
            return SUCCESS;

        case TOKEN_REQ:
            match(TOKEN_REQ);
            return SUCCESS;

        default:
            return FAILED;
    }
}

int scE() {
    if (token == '+') {
        match('+');
        if (cT()) {
            while (token == '+' || token == '-' || token == TOKEN_OR) {
                if (!aO()) {
                    return FAILED;
                }
                if (!cT()) {
                    return FAILED;
                }
            }
            return SUCCESS;
        }
        return FAILED;

    } else if (token == '-') {
        match('-');
        if (cT()) {
            while (token == '+' || token == '-' || token == TOKEN_OR) {
                if (!aO()) {
                    return FAILED;
                }
                if (!cT()) {
                    return FAILED;
                }
            }
            return SUCCESS;
        }
        return FAILED;

    } else if (cT()) {
        while (token == '+' || token == '-' || token == TOKEN_OR) {
            if (!aO()) {
                return FAILED;
            }
            if (!cT()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}

int aO() {
    if (token == '+') {
        match('+');
        return SUCCESS;

    } else if (token == '-') {
        match('-');
        return SUCCESS;

    } else if (token == TOKEN_OR) {
        match(TOKEN_OR);
        return SUCCESS;
    }
    return FAILED;
}

int cT() {
    if (cF()) {
        while (token == '*' || token == '/' || token == TOKEN_DIV || token == TOKEN_MOD || token == TOKEN_AND || token == '&') {
            printf("%d\n", token);
            if (!mO()) {
                return FAILED;  
            }
            if (!cF()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}

int mO() {
    switch (token) {
        case '*':
            match('*');
            return SUCCESS;

        case '/':
            match('/');
            return SUCCESS;

        case TOKEN_DIV:
            match(TOKEN_DIV);
            return SUCCESS;

        case TOKEN_MOD:
            match(TOKEN_MOD);
            return SUCCESS;

        case TOKEN_AND:
            match(TOKEN_AND);
            return SUCCESS;

        case '&':
            match('&');
            return SUCCESS;

        default:
            return FAILED;
    }
}

int cF() {
    if (token == TOKEN_INTEGER) {
        match(TOKEN_INTEGER);
        return SUCCESS;

    } else if (token == TOKEN_STRING) {
        match(TOKEN_STRING);
        return SUCCESS;

    } else if (token == '(') {
        match('(');
        if (cE()) {
            if (token == ')') {
                match(')');
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
        
    } else if (token == TOKEN_NOT) {
        match(TOKEN_NOT);
        if (cF()) {
            return SUCCESS;
        }
        return FAILED;
        
    } else if (token == '~') {
        match('~');
        if (cF()) {
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

/*Second Part*/

int tD() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        if (token == '=') {
            match('=');
            if (T()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int T() {
    if (siT()) {
        return SUCCESS;
    } else if (aT()) {
        return SUCCESS;
    } else if (pT()) {
        return SUCCESS;
    }
    return FAILED;
}

int siT() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        return SUCCESS;
    } else if (eN()) {
        return SUCCESS;
    } else if (sbT()) {
        return SUCCESS;
    }
    return FAILED;
}

int eN() {
    if (token == '(') {
        match('(');
        if (iL()) {
            if (token == ')') {
                match(')');
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int iL() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        while (token == ',') {
            if (!(token == ',')) {
                return FAILED;
            }
            match(',');
            if (!(token == TOKEN_IDENT)) {
                return FAILED;
            }
            match(TOKEN_IDENT);
        }
        return SUCCESS;
    }
    return FAILED;
}

int sbT() {
    if (token == '[') {
        match('[');
        if (cE()) {
            if (token == TOKEN_DOUBLEDOT) {
                match(TOKEN_DOUBLEDOT);
                if (cE()) {
                    if (token == ']') {
                        match(']');
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int aT() {
    if (token == TOKEN_ARRAY) {
        match(TOKEN_ARRAY);
        if (siT()) {
            while (token == ',') {
                if (!(token == ',')) {
                    return FAILED;
                }
                match(',');
                if (!siT()) {
                    return FAILED;
                }
            }
            if (token == TOKEN_OF) {
                match(TOKEN_OF);
                if (T()) {
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int pT() {
    if (token == TOKEN_PROCEDURE) {
        match(TOKEN_PROCEDURE);
        if (ftL()) {
            return SUCCESS;
        }
        return SUCCESS;
    }
    return FAILED;
}

/*  '(' ("VAR"? fT() (',' "VAR"? fT())* )? */
int ftL() {
    if (token == '(') {
        match('(');
        if (token == TOKEN_VAR) {
            match(TOKEN_VAR);
            if (fT()) {
                while (token == ',') {
                    if (!(token == ',')) {
                        return FAILED;
                    }
                    match(',');
                    if (token == TOKEN_VAR) {
                        match(TOKEN_VAR);
                    }
                    if (!fT()) {
                        return FAILED;
                    }
                }
                if (token == ')') {
                    match(')');
                    if (token == ':') {
                        match(':');
                        if (token == TOKEN_IDENT) {
                            match(TOKEN_IDENT);
                            return SUCCESS;
                        }
                        return FAILED;
                    }
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        } 
        if (fT()) {
            while (token == ',') {
                if (!(token == ',')) {
                    return FAILED;
                }
                if (token == TOKEN_VAR) {
                    match(TOKEN_VAR);
                }
                if (!fT()) {
                    return FAILED;
                }
            }
            if (token == ')') {
                match(')');
                if (token == ':') {
                    match(':');
                    if (token == TOKEN_IDENT) {
                        match(TOKEN_IDENT);
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return SUCCESS;
            }
            return FAILED;
        }
        if (token == ')') {
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

int vD() {
    if (iL()) {
        if (token == ':') {
            match(':');
            if (T()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int fT() {
    if (token == TOKEN_ARRAY) {
        match(TOKEN_ARRAY);
        if (token == TOKEN_OF) {
            match(TOKEN_OF);
            if (token == TOKEN_IDENT) {
                match(TOKEN_IDENT);
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        return SUCCESS;
    }
    return FAILED;
}


/* Third Part */

int D() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        if(dT()) {
            return SUCCESS;
        }
        return SUCCESS;
    }
    return FAILED;
}

int dT() {
    if (!(token == '[')) {
        match('[');
        return FAILED;
    }
    while (token == '[') {
        if (!(token == '[')) {
            return FAILED;
        }
        match('[');
        if (!eL()) {
            return FAILED;
        }
        if (!(token == ']')) {
            return FAILED;
        }
        match(']');
    }
    return SUCCESS;
}


int eL() {
    if (E()) {
        while (token == ',') {
            if (!(token == ',')) {
                return FAILED;
            }
            match(',');
            if (!E()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}

int E() {
    if (sE()) {
        if (R()) {
            if (sE()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return SUCCESS;
    }
    return FAILED;
}

int sE() {
    if (token == '+') {
        match('+');
        if (tM()) {
            while (token == '+' || token == '-' || token == TOKEN_OR) {
                if (!aO()) {
                    return FAILED;
                }
                if (!tM()) {
                    return FAILED;
                }
            }
            return SUCCESS;
        }
        return FAILED;
    }
    if (token == '-') {
        match('-');
        if (tM()) {
            while (token == '+' || token == '-' || token == TOKEN_OR) {
                if (!aO()) {
                    return FAILED;
                }
                if (!tM()) {
                    return FAILED;
                }
            }
            return SUCCESS;
        }
        return FAILED;
    }
    if (tM()) {
        while (token == '+' || token == '-' || token == TOKEN_OR) {
            if (!aO()) {
                return FAILED;
            }
            if (!tM()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}

int tM() {
    if (F()) {
        while (token == '*' || token == '/' || token == TOKEN_DIV || token == TOKEN_MOD || token == TOKEN_AND || token == '&') {
            if (!mO()) {
                return FAILED;
            }
            if (!F()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}

int F() {
    if (token == TOKEN_INTEGER) {
        match(TOKEN_INTEGER);
        return SUCCESS;
    }
    if (token == TOKEN_STRING) {
        match(TOKEN_STRING);
        return SUCCESS;
    }
    if (dpC()) {
        return SUCCESS;
    }
    if (token == '(') {
        match('(');
        if (E()) {
            if (token == ')') {
                match(')');
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    if (token == TOKEN_NOT) {
        match(TOKEN_NOT);
        if (F()) {
            return SUCCESS;
        }
        return FAILED;
    }
    if (token == '~') {
        match('~');
        if (F()) {
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

int dpC() {
    if (token == TOKEN_IDENT) {
        match(TOKEN_IDENT);
        if (dT()) {
            if (aP()) {
                return SUCCESS;
            }
            return SUCCESS;
        }
        if (aP()) {
            return SUCCESS;
        }
        return SUCCESS;
    }
    return FAILED;
}

int aP() {
    if (token == '(') {
        match('(');
        if (eL()) {
            if (token == ')') {
                match(')');
                return SUCCESS;
            }
            return FAILED;
        }
        if (token == ')') {
            match(')');
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

/* Fourth Part */

int S() {
    if (apC()) {
        return SUCCESS;
    }
    if (ifS()) {
        return SUCCESS;
    }
    if (ioS()) {
        return SUCCESS;
    }
    if (wS()) {
        return SUCCESS;
    }
    if (rS()) {
        return SUCCESS;
    }
    if (fS()) {
        return SUCCESS;
    }
    if (token == TOKEN_EXIT) {
        match(TOKEN_EXIT);
        return SUCCESS;
    }
    if (token == TOKEN_RETURN) {
        match(TOKEN_RETURN);
        if (E()) {
            return SUCCESS;
        }
        return SUCCESS;
    }
    return SUCCESS;
}


int ioS() {
    if (token == TOKEN_READ) {
        match(TOKEN_READ);
        if (token == '(') {
            match('(');
            if (D()) {
                while (token == ',') {
                    if (!(token == ',')) {
                        return FAILED;
                    }
                    match(',');
                    if (!D()) {
                        return FAILED;
                    }
                }
                if (token == ')') {
                    match(')');
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    if (token == TOKEN_WRITE) {
        match(TOKEN_WRITE);
        if (token == '(') {
            match('(');
            if (E()) {
                while (token == ',') {
                    if (!(token == ',')) {
                        return FAILED;
                    }
                    match(',');
                    if (!E()) {
                        return FAILED;
                    }
                }
                if (token == ')') {
                    match(')');
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int apC() {
    if (D()) {
        if (token == TOKEN_ASSIGN) {
            match(TOKEN_ASSIGN);
            if (E()) {
                return SUCCESS;
            }
            return FAILED;
        }
        if (aP()) {
            return SUCCESS;
        }
        return SUCCESS;
    }
    return FAILED;
}

int sS() {
    if (S()) {
        while (token == ';') {
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
            if (!S()) {
                return FAILED;
            }
        }
        return SUCCESS;
    }
    return FAILED;
}
 
int ifS() {
    if (token == TOKEN_IF) {
        match(TOKEN_IF);
        if (E()) {
            if (token == TOKEN_THEN) {
                match(TOKEN_THEN);
                if (sS()) {
                    while (token == TOKEN_ELSIF) {
                        if (!(token == TOKEN_ELSIF)) {
                            return FAILED;
                        }
                        match(TOKEN_ELSIF);
                        if (!E()) {
                            return FAILED;
                        }
                        if (!(token == TOKEN_THEN)) {
                            return FAILED;
                        }
                        match(TOKEN_THEN);
                        if (!sS()) {
                            return FAILED;
                        }
                    }
                    if (token == TOKEN_ELSE) {
                        match(TOKEN_ELSE);
                        if (sS()) {
                            if (token == TOKEN_END) {
                                match(TOKEN_END);
                                return SUCCESS;
                            }
                            return FAILED;
                        }
                        return FAILED;
                    }
                    if (token == TOKEN_END) {
                        match(TOKEN_END);
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int wS() {
    if (token == TOKEN_WHILE) { 
        match(TOKEN_WHILE);
        if (E()) {
            if (token == TOKEN_DO) {
                match(TOKEN_DO);
                if (sS()) {
                    if (token == TOKEN_END) {
                        match(TOKEN_END);
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int rS() {
    if (token == TOKEN_REPEAT) {
        match(TOKEN_REPEAT);
        if (sS()) {
            if (token == TOKEN_UNTIL) {
                match(TOKEN_UNTIL);
                if (E()) {
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int fS() {
    if (token == TOKEN_FOR) {
        match(TOKEN_FOR);
        if (token == TOKEN_IDENT) {
            match(TOKEN_IDENT);
            if (token == TOKEN_ASSIGN) {
                match(TOKEN_ASSIGN);
                if (E()) {
                    if (token == TOKEN_TO) {
                        match(TOKEN_TO);
                        if (E()) {
                            if (token == TOKEN_BY) {
                                match(TOKEN_BY);
                                if (cE()) {
                                    if (token == TOKEN_DO) {
                                        match(TOKEN_DO);
                                        if (sS()) {
                                            if (token == TOKEN_END) {
                                                match(TOKEN_END);
                                                return SUCCESS;
                                            }
                                            return FAILED;
                                        }
                                        return FAILED;
                                    }
                                    return FAILED;
                                }
                                return FAILED;
                            }
                            if (token == TOKEN_DO) {
                                match(TOKEN_DO);
                                if (sS()) {
                                    if (token == TOKEN_END) {
                                        match(TOKEN_END);
                                        return SUCCESS;
                                    }
                                    return FAILED;
                                }
                                return FAILED;
                            }
                            return FAILED;
                        }
                        return FAILED;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

/* Fifth Part */

int pD() {
    if (pH()) {
        if (token == ';') {
            match(';');
            if (B()) {
                if (token == TOKEN_IDENT) {
                    match(TOKEN_IDENT);
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int pH() {
    if (token == TOKEN_PROCEDURE) {
        match(TOKEN_PROCEDURE);
        if (token == TOKEN_IDENT) {
            match(TOKEN_IDENT);
            if (fP()) {
                return SUCCESS;
            }
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

int B() {
    while (token == TOKEN_CONST || token == TOKEN_TYPE || token == TOKEN_VAR || token == TOKEN_PROCEDURE || token == TOKEN_MODULE) {
        if (!dC()) {
            return FAILED;
        }
    }
    if (token == TOKEN_BEGIN) {
        match(TOKEN_BEGIN);
        if (sS()) {
            if (token == TOKEN_END) {
                match(TOKEN_END);
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    if (token == TOKEN_END) {
        match(TOKEN_END);
        return SUCCESS;
    }
    return FAILED;
}

int dC() {
    if (token == TOKEN_CONST) {
        match(TOKEN_CONST);
        while (token == TOKEN_IDENT) {
            if (!cD()) {
                return FAILED;
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (token == TOKEN_TYPE) {
        match(TOKEN_TYPE);
            while (token == TOKEN_IDENT) {
            if (!tD()) {
                return FAILED;
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (token == TOKEN_VAR) {
        match(TOKEN_VAR);
            while (token == TOKEN_IDENT) {
            if (!vD()) {
                return FAILED;
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (pD()) {
        return SUCCESS;
    }
    if (mD()) {
        return SUCCESS;
    }
    return FAILED;
}

int fP() {
    if (token == '(') {
        match('(');
        if (fpS()) {
            while (token == ';') {
                if (!(token == ';')) {
                    return FAILED;
                }
                match(';');
                if (!fpS()) {
                    return FAILED;
                }
            }
            if (token == ')') {
                match(')');
                if (token == ':') {
                    match(':');
                    if (token == TOKEN_IDENT) {
                        match(TOKEN_IDENT);
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return SUCCESS;
            }
            return FAILED;
        }
        if (token == ')') {
            match(')');
            if (token == ':') {
                match(':');
                if (token == TOKEN_IDENT) {
                    match(TOKEN_IDENT);
                    return SUCCESS;
                }
                return FAILED;
            }
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

int fpS() {
    if (token == TOKEN_VAR) {
        match(TOKEN_VAR);
        if (iL()) {
            if (token == ':') {
                match(':');
                if (fT()) {
                    return SUCCESS;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    if (iL()) {
        if (token == ':') {
            match(':');
            if (fT()) {
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int mD() {
    if (token == TOKEN_MODULE) {
        match(TOKEN_MODULE);
        if (token == TOKEN_IDENT) {
            match(TOKEN_IDENT);
            if (P()) {
                if (token == ';') {
                    match(';');
                    if (B()) {
                        if (token == TOKEN_IDENT) {
                            match(TOKEN_IDENT);
                            return SUCCESS;
                        }
                        return FAILED;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            if (token == ';') {
                match(';');
                if (B()) {
                    if (token == TOKEN_IDENT) {
                        match(TOKEN_IDENT);
                        return SUCCESS;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int P() {
    if (token == '[') {
        match('[');
        if (cE()) {
            if (token == ']') {
                match(']');
                return SUCCESS;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int dM() {
    if (token == TOKEN_DEFINITION) {
        match(TOKEN_DEFINITION);
        if (token == TOKEN_MODULE) {
            match(TOKEN_MODULE);
            if (token == TOKEN_IDENT) {
                match(TOKEN_IDENT);
                if (token == ';') {
                    match(';');
                    while (token == TOKEN_CONST || token == TOKEN_TYPE || token == TOKEN_VAR || token == TOKEN_PROCEDURE) {
                        if (!dF()) {
                            return FAILED;
                        }
                    }
                    if (token == TOKEN_END) {
                        match(TOKEN_END);
                        if (token == TOKEN_IDENT) {
                            match(TOKEN_IDENT);
                            if (token == '.') {
                                match('.');
                                return SUCCESS;
                            }
                            return FAILED;
                        }
                        return FAILED;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int dF() {
    if (token == TOKEN_CONST) {
        match(TOKEN_CONST);
        while (token == TOKEN_IDENT) {
            if (!cD()) {
                return FAILED;
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (token == TOKEN_TYPE) {
        match(TOKEN_TYPE);
        while (token == TOKEN_IDENT) {
            if (!(token == TOKEN_IDENT)) {
                return FAILED;
            }
            match(TOKEN_IDENT);
            if (token == '=') {
                match('=');
                if (!T()) {
                    return FAILED;
                }
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (token == TOKEN_VAR) {
        match(TOKEN_VAR);
        while (token == TOKEN_IDENT) {
            if (!vD()) {
                return FAILED;
            }
            if (!(token == ';')) {
                return FAILED;
            }
            match(';');
        }
        return SUCCESS;
    }
    if (pH()) {
        if (token == ';') {
            match(';');
            return SUCCESS;
        }
        return FAILED;
    }
    return FAILED;
}

int pM() {
    if (token == TOKEN_MODULE) {
        match(TOKEN_MODULE);
        if (token == TOKEN_IDENT) {
            match(TOKEN_IDENT);
            if (P()) {
                if (token == ';') {
                    match(';');
                    if (B()) {
                        if (token == TOKEN_IDENT) {
                            match(TOKEN_IDENT);
                            if (token == '.') {
                                match('.');
                                return SUCCESS;
                            }
                            return FAILED;
                        }
                        return FAILED;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            if (token == ';') {
                match(';');
                if (B()) {
                    if (token == TOKEN_IDENT) {
                        match(TOKEN_IDENT);
                        if (token == '.') {
                            match('.');
                            return SUCCESS;
                        }
                        return FAILED;
                    }
                    return FAILED;
                }
                return FAILED;
            }
            return FAILED;
        }
        return FAILED;
    }
    return FAILED;
}

int cU() {
    if (dM()) {
        return SUCCESS;
    }
    if (token == TOKEN_IMPLEMENTATION) {
        match(TOKEN_IMPLEMENTATION);
        if (pM()) {
            return SUCCESS;
        }
        return FAILED;
    }
    if (pM()) {
        return SUCCESS;
    }
    return FAILED;
}


int main() {
    token = yylex();
    if (cU() && token == 0) {
        puts("Parsed");
    } else {
        puts("Error Parsing");
    }
    return 0;
}

