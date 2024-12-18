#include <stdio.h>

// basic pointer example
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    printf("%d %d\n", &arr[0], p);

    printf("%d\n", (p + 6));
    char a = '6';

    char *b = &a;

    printf("%d %d", b, b + 1);

    return 0;
}