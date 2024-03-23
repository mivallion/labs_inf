#include "iterator.h"

Iterator *iter_create(List *list)
{
    Iterator *iter = (Iterator *) malloc(sizeof(Iterator));
    iter->node = list->head;
}

ListNode *iter_next(Iterator *iter)
{
    iter->node = iter->node->next;
    return iter->node;
}

void iter_set(Iterator *iter, Item value)
{
    iter->node->data = value;
}

Item iter_get(Iterator *iter)
{
    return iter->node->data;
}

void iter_delete(Iterator *iter)
{
    ListNode *tmp = (ListNode *) malloc(sizeof(ListNode));
    tmp = iter->node->next;
    free(iter->node->next);
    iter->node->next = tmp->next;
}

