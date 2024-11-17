#include <stdio.h>

int a[100000], sum = 0;
// basic sum of elements in array with recursion
void goNextIndex(int i, int n)
{
    if (i >= n)
    {
        return;
    }

    sum += a[i];

    goNextIndex(i + 1, n);
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    goNextIndex(0, n);

    printf("%d", sum);
    return 0;
}