#include <stdio.h>

int main()
{
    int x, z, a, b;
    a = 0;
    b = 1;
    scanf("%d %d", &x, &z);
    while (z <= x)
        scanf("%d", &z);

    for (int i = x; i < z; i++)
    {
        a += i;
        if (a > z)
            break;
        b++;
    }
    printf("%d\n", b);
    return 0;
}