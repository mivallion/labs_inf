#ifndef ITERATOR_H
#define ITERATOR_H

#include "list.h"

typedef struct {
    ListNode *node;
} Iterator;

Iterator *iter_create(List *list);
ListNode *iter_next(Iterator *iter);

void iter_set(Iterator *iter, Item value);
Item iter_get(Iterator *iter);
void iter_delete(Iterator *iter);

#endif
