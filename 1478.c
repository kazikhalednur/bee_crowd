#include <stdio.h>

int main()
{
    int n, m, j;
    while (scanf("%d", &n) && n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            m = i + 1;
            for (j = 1; j <= i; j++)
            {
                printf("%3d ", m);
                m--;
            }
            for (j = 1; j < n - i; j++)
            {
                printf("%3d ", j);
            }
            printf("%3d\n", j);
        }
        printf("\n");
    }
}