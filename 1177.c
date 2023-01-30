#include <stdio.h>

int main()
{
    int n, p = 0;
    scanf("%d", &n);
    for (int i = 0; i < 1000; i++)
    {
        if (p == n)
            p = 0;
        printf("N[%d] = %d\n", i, p);
        p++;
    }
    return 0;
}