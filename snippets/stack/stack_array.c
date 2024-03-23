#include <stdlib.h>
#include <stdbool.h>

#include "stack_array.h"

Stack *stack_create(size_t stack_size)
{
    Stack *s = (Stack *) malloc(sizeof(Stack));

    s->data = malloc(sizeof(Item) * stack_size);
    s->ptr  = 0;

    return s;
}

void stack_push(Stack *s, Item value)
{
    s->data[s->ptr++] = value;  // *(s->data++) = value;
}

Item stack_pop(Stack *s)
{
    return s->data[--s->ptr];   // return *(--s->data);
}

bool stack_is_empty(Stack *s)
{
    return (s->ptr <= 0);
}

void stack_destroy(Stack *s)
{
    free(s->data);
    s->ptr = 0;
}

