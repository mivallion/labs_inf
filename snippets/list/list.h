#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stdlib.h>

typedef int Item;

typedef struct listnode {
    Item data;
    struct listnode *next;
} ListNode;

typedef struct {
    ListNode *head;
    ListNode *last;
} List;

List *list_create();
void list_insert(ListNode *after_node, Item value);
void list_delete(ListNode *after_node);
bool list_is_empty(List *list);
void list_destroy(List *list);

#endif

