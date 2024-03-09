#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int data;
} N_Node;

N_Node * newNode(int data) {
    N_Node *node = (N_Node *)malloc(sizeof(N_Node));
    node->data = data;
    return node;
}

int main(void) {
    int data = 42;
    N_Node *node = newNode(data);

    printf("%d\n", node->data);

    free(node);
    return 0;
}