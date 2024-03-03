#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int data;
    struct _node* parent;
    struct _node** children;
} N_Node;

typedef struct _b_node {
    int data;
    struct _b_node* parent;
    struct _b_node* left;
    struct _b_node* right;
} Binary_Node;

typedef struct _tree {
    N_Node *root;
} Tree;

N_Node * newNode(int data) {
    N_Node *node = (N_Node *)malloc(sizeof(N_Node));
    node->data = data;
    node->children = NULL;
    return node;
}

int main(void) {
    int data = 42;
    N_Node *node = newNode(data);

    printf("%d\n", node->data);

    free(node);
    return 0;
}