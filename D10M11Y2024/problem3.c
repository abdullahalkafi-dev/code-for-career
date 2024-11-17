#include <stdio.h>

int a[100000];
// basic sum of elements in array with recursion (another way)
int getSum(int i, int n)
{
    if (i == n)
    {
        return 0;
    }

  printf("%d",i);
  return a[i]+  getSum(i + 1, n);
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
     int sum= getSum(0, n);

    printf("%d", sum);
    return 0;
}