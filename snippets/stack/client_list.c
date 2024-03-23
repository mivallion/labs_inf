#include <stdio.h>
#include "stack_list.h"

int main(int argc, char *argv[])
{
    int val;
    Stack *s = stack_create();

    while (scanf("%d", &val) == 1)
        stack_push(s, val);

    while (!stack_is_empty(s))
        printf("%d\n", stack_pop(s));

    return 0;
}
