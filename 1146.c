#include <stdio.h>

int main()
{

    int x;
a:
    scanf("%d", &x);
    while (x != 0)
    {
        for (int i = 1; i < x; i++)
        {
            printf("%d ", i);
        }
        printf("%d\n", x);
        goto a;
    }

    return 0;
}