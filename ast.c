#include "ast.h"

Node* makeLeaf(const char* value) {
    Node* n = malloc(sizeof(Node));
    n->label = strdup(value);
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node* makeNode(const char* label, Node* left, Node* right) {
    Node* n = malloc(sizeof(Node));
    n->label = strdup(label);
    n->left = left;
    n->right = right;
    return n;
}