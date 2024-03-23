#include <stdio.h>
#include <stdlib.h>

#include "mystring.h"

int main(int argc, char *argv[])
{
    String s;
    char c;
    string_init(&s);
    
    while ((c = getchar()) != EOF) {
        string_add(&s, c);
    }
    
    String s2;
    string_init(&s2);
    string_copy(&s, &s2);
    
    printf("%s\n", s2.string);
    
    return 0;
}

