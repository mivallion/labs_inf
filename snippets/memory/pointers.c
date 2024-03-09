#include <stdio.h>

int foo(int a) {
    return a;
}

int main(void) {
    int x = 42;
    foo(x);


    int *p = NULL;
    printf("%p\n", (void *)p);

    p = &x;
    printf("%p %d\n", (void *)p, *p);

    *p = 43;
    printf("%p %d\n", (void *)p, *p);

    return 0;
}