#include <stdio.h>
#include <math.h>

//difference between main and sec diagram in matrix

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int main_diagram = 0, sec_diagram = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", m[i][j]);
            if (i == j)
            {
                main_diagram += m[i][j];
            }

            if (i + j == n - 1)
            {
                sec_diagram += m[i][j];
            }
        }
        printf("\n");
    }

    int diff = abs(main_diagram - sec_diagram);
    printf("%d", diff);

    return 0;
    ;
}