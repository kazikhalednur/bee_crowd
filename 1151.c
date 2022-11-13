#include <stdio.h>

int main()
{
    int n, c;
    int a = 0, b = 1;
    scanf("%d", &n);
    n >= 1 ? printf("%d", a) : '\0';
    n >= 2 ? printf(" %d", b) : '\0';
    for (int i = 2; i < n; i++)
    {
        c = a;
        a = b;
        b = c + b;
        printf(" %d", b);
    }
    printf("\n");

    return 0;
}