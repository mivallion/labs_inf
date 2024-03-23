#include "list.h"

List *list_create()
{
    List *list = (List*) malloc(sizeof(List));
    
    list->head = (ListNode*) malloc(sizeof(ListNode));
    list->head->next = NULL;

    return list;
}

void list_insert(ListNode *after_node, Item value)
{
    ListNode *inserted = (ListNode*) malloc(sizeof(ListNode));
    inserted->data = value;
    inserted->next = after_node->next;
    after_node->next = inserted;
}

void list_delete(ListNode *after_node)
{
    ListNode *tmp = after_node->next;
    free(after_node->next);
    after_node->next = tmp->next;
}

bool list_is_empty(List *list)
{
    return (list->head->next == NULL);
}

void list_destroy(List *list)
{
    ListNode *n = list->head->next;
    while (list->head != NULL)
    {
        n = list->head->next;
        free(list->head);
        list->head = n;
    }
    list->head = NULL;
}







