#include <stdio.h>

int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x == y && y == z)
        {
            printf("*\n");
        }
        else if (x != y && x != z && y == z)
        {
            printf("A\n");
        }
        else if (y != x && y != z && x == z)
        {
            printf("B\n");
        }
        else if (z != y && z != x && x == y)
        {
            printf("C\n");
        }
    }
    return 0;
}