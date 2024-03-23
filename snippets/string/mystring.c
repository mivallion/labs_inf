#include <stdlib.h>

#include "mystring.h"

/*
 * Inefficient +1-if-needed algorithm used for simplicity
 * DO NOT USE it in practice
 */

void string_init(String *s)
{
    s->string = (char *) malloc(sizeof(char) * 1);
    s->length = 0;
    s->string[s->length] = '\0';
}

void string_add(String *s, char c)
{
    s->string = realloc(s->string, s->length + 1);
    s->string[s->length] = c;
    s->string[++s->length] = '\0';
}

void string_copy(String *from, String *to)
{
    to->length = from->length;
    to->string = (char *) malloc(sizeof(char) * (to->length + 1));
    for (int i = 0; i < to->length; ++i)
        to->string[i] = from->string[i];
}

void string_destroy(String *s)
{
    free(s->string);
    s->string = NULL;
}

