#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}