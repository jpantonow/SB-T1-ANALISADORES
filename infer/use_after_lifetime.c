// use_after_lifetime.c
// error: USE_AFTER_LIFETIME
// infer run -- gcc -c use_after_lifetime.c

#include <stdio.h>

int *return_local_pointer()
{
    int local_var = 42;
    // Returning pointer to a local variable
    return &local_var;
}

int main()
{
    int *ptr = return_local_pointer();
    // Undefined behavior
    printf("Dereferenced pointer: %d\n", *ptr);
    return 0;
}
