#ifndef _MYSTRING_H_
#define _MYSTRING_H_

typedef struct {
    char  *string;
    size_t length;
} String;

void string_init(String *s);
void string_destroy(String *s);

void string_add(String *s, char c);
void string_copy(String *from, String *to);

#endif // _MYSTRING_H_
