#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef int Item;

typedef struct stacknode {
    Item data;
    struct stacknode *next;
} StackNode;

typedef struct {
    StackNode *head;
} Stack;

Stack *stack_create(size_t stack_size);

StackNode *insert_stack_node(StackNode *parent, Item value);

void stack_push(Stack *s, Item value);
Item stack_pop(Stack *s);

bool stack_is_empty(Stack *s);

void stack_destroy(Stack *s);

#endif

