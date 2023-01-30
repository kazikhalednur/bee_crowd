#include <stdio.h>

int main()
{
    int n, r = 4, j = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d\n", r);
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (j % 2 == 0)
            r += 2;
        else
            r += 1;
        j++;
        printf("%d\n", r);
    }
    // printf("%d\n", r);
    return 0;
}