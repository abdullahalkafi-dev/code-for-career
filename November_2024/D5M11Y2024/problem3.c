#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// No Repeatation
// You will be given an Array of N integers, print the count of numbers that have appeared only once.

// Input Format

// The first line will contain an integer N.
// The next line will contain N integers.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 10^5
// Output Format

// Print a single integer,the count of numbers that have apeared only once in the array.

// Sample Input 0

// 10
// 1 4 3 3 5 2 4 6 2 3
// Sample Output 0

// 3
// Explanation 0

// In the sample only 1, 5, 6 have apeared only once in the array.So, the count is 3.



int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int freqArr[max + 1];

    for (int i = 0; i < max + 1; i++)
    {
        freqArr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freqArr[arr[i]]++;
    }

    int totalSingle = 0;
    for (int i = 0; i < n; i++)
    {
        if (freqArr[arr[i]] == 1)
        {
            totalSingle++;
        }
    }

    printf("%d", totalSingle);

    return 0;
}