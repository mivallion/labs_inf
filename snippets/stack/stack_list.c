#include <stdlib.h>
#include <stdbool.h>

#include "stack_list.h"

Stack *stack_create(size_t stack_size)
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->head = NULL;
    return s;
}

StackNode *insert_stack_node(StackNode *parent, Item value)
{
    StackNode *new_node = (StackNode *) malloc(sizeof(StackNode));

    new_node->data = value;
    new_node->next = parent;

    return new_node;
}

void stack_push(Stack *s, Item value)
{
    s->head = insert_stack_node(s->head, value);
}

Item stack_pop(Stack *s)
{
    Item data = s->head->data;

    StackNode *tmp = s->head->next;
    free(s->head);
    s->head = tmp;

    return data;
}

bool stack_is_empty(Stack *s)
{
    return (s->head == NULL);
}

void stack_destroy(Stack *s)
{
    while (!stack_is_empty(s))
        stack_pop(s);
}
