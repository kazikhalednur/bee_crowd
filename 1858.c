#include <stdio.h>

int main()
{
    int x, y, min[2];
    scanf("%d", &y);
    scanf("%d", &x);
    min[0] = x;
    min[1] = 1;
    for (int i = 2; i <= y; i++)
    {
        scanf("%d", &x);
        if (x < min[0])
        {
            min[0] = x;
            min[1] = i;
        }
    }
    printf("%d\n", min[1]);
    return 0;
}