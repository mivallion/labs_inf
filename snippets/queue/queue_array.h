#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdbool.h>

typedef int Item;

typedef struct {
    int head;
    int last;
    int size;
    Item *data;
} Queue;

Queue *queue_create(size_t queue_size)
{
    Queue *q = (Queue *) malloc(sizeof(Queue));

    q->size = queue_size + 1;
    q->data = (Item *) malloc(sizeof(Item) * q->size);

    q->head = q->size;
    q->last = 0;

    return q;
}

void queue_put(Queue *q, Item value)
{
    q->data[q->last++] = value;
    q->last %= q->size;
}

Item queue_get(Queue *q)
{
    q->head %= q->size;
    return q->data[q->head++];
}

bool queue_is_empty(Queue *q)
{
    return (q->head % q->size) == q->last;
}

void queue_destroy(Queue *q)
{
    free(q->data);
}

#endif

