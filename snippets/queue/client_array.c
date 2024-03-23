#include <stdio.h>
#include "queue_array.h"

int main(int argc, char *argv[])
{
    int val;
    Queue *q = queue_create(100);

    while (scanf("%d", &val) == 1)
        queue_put(q, val);

    while (!queue_is_empty(q))
        printf("%d\n", queue_get(q));

    return 0;
}
