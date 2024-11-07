// double_free.c
// error: USE_AFTER_FREE
// infer run -- gcc -c double_free.c

#include <stdio.h>
#include <stdlib.h>

void double_free()
{
    int *data = (int *)malloc(sizeof(int) * 10);
    if (data == NULL)
    {
        return;
    }
    free(data);
    // Double free error
    // Second free on the same pointer, leading to undefined behavior
    free(data);
}

int main()
{
    double_free();
    return 0;
}
