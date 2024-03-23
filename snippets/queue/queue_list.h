#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdbool.h>

typedef int Item;

typedef struct queuenode {
    Item data;
    struct queuenode *next;
} QueueNode;

typedef struct {
    QueueNode *head;
    QueueNode *last;
} Queue;

Queue *queue_create(size_t queue_size)
{
    Queue *q = (Queue *) malloc(sizeof(Queue));
    q->head = q->last = NULL;
    return q;
}

QueueNode *create_queue_node(Item value)
{
    QueueNode *new_node = (QueueNode *) malloc(sizeof(QueueNode));

    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

void queue_put(Queue *q, Item value)
{
    QueueNode *tmp = q->last;
    q->last = create_queue_node(value);

    if (q->head == NULL)
        q->head = q->last;
    else
        tmp->next = q->last;
}

Item queue_get(Queue *q)
{
    Item data = q->head->data;

    QueueNode *tmp = q->head->next;
    free(q->head);
    q->head = tmp;

    return data;
}

bool queue_is_empty(Queue *q)
{
    return (q->head == NULL);
}

void queue_destroy(Queue *q)
{
    while (!queue_is_empty(q))
        queue_get(q);
}

#endif

