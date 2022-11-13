#include <stdio.h>

int main()
{
    long long sum;
    int m, n, i, j;
    n = 1;
    while (scanf("%d", &m) != EOF)
    {
        if (m == 0)
        {
            printf("Caso %d: 1 numero\n", n);
            printf("0\n\n");
        }
        else
        {
            sum = ((m * (m + 1)) / 2) + 1;
            printf("Caso %d: %lld numeros\n", n, sum);
            printf("0");
            for (i = 1; i <= m; i++)
            {
                for (j = 0; j < i; j++)
                {
                    printf(" %d", i);
                }
            }
            printf("\n\n");
        }
        n++;
    }
    return 0;
}