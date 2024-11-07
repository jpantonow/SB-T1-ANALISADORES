// uninitialized_value.c
// error: PULSE_UNINITIALIZED_VALUE
// // infer run -- gcc -c uninitialized_value.c

#include <stdio.h>

void print_uninitialized()
{
    int value;

    // Using 'value' without initializing it
    printf("Uninitialized value: %d\n", value); // Undefined behavior
}

int main()
{
    print_uninitialized();
    return 0;
}
