#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w, x, y, z;
    while (scanf("%d %d %d %d", &w, &x, &y, &z) && w != 0 && x != 0 && y != 0 && z != 0)
    {
        if ((w == y) && (x == z))
        {
            printf("0\n");
        }
        else if ((abs(w - y) == abs(x - z)) || ((w == y) || (x == z)))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}