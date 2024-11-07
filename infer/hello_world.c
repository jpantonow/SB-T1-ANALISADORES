// hello.c
// error: NULL_DEREFERENCE
// infer run -- gcc -c hello.c

#include <stdlib.h>

void test()
{
    int *s = NULL;
    *s = 42;
}
