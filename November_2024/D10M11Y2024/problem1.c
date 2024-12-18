#include <stdio.h>

// basic recursion example
void fun(int x, int n)
{
    if (x > n)
    {
        return;
    }

    printf("%d\n", x);
    fun(x + 1, n);
    printf("%d after\n", x);
}

int main()
{

    int n = 5;
    fun(1, n);

    return 0;
}