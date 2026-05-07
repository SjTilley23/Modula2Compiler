#ifndef AST_H
#define AST_H

#include <stdlib.h>
#include <string.h>

/* AST node definition */
typedef struct Node {
    char* label;
    struct Node* left;
    struct Node* right;
} Node;

/* function prototypes */
Node* makeNode(const char* label, Node* left, Node* right);
Node* makeLeaf(const char* value);

#endif