#include <stdio.h>

int main()
{
    int n, res, i = 0;
    scanf("%d", &n);
    while (1)
    {
        res = n * i + 2;
        if (res <= 10000)
            printf("%d\n", res);
        else
            break;
        i++;
    }
    return 0;
}