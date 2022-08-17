#include <stdio.h>

int main()
{
    int x, max[2];
    scanf("%d", &x);
    max[0] = x;
    max[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        scanf("%d", &x);
        if (x > max[0])
        {
            max[0] = x;
            max[1] = i;
        }
    }
    printf("%d\n%d\n", max[0], max[1]);
    return 0;
}