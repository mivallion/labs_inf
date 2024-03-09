#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr;

    int n;
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    arr = NULL;

    // см realloc

    return 0;
}
