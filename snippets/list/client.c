#include <stdio.h>
#include "list.h"
#include "iterator.h"

int main(int argc, char *argv[])
{
    int val;
    List *l = list_create(100);

    while (scanf("%d", &val) == 1) {
        list_insert(l->head, val);
    }
    Iterator *it = iter_create(l);

    while (iter_next(it) != NULL) {
        printf("%d\n", iter_get(it));
    }

    return 0;
}
