#include <stdio.h>

// use of pointer

int main()
{

    int a = 5, b = 8;
    int *x = &a, *y = &b;

    printf("a=%d b=%d\n", a, b);
    // dereference
    int temp = *x;
    *x = *y;

    *y = temp;
    printf("a=%d b=%d", a, b);

    return 0;
}