#include <stdio.h>
#include <math.h>

int main()
{
    int n, x1, y1, x2, y2, x3, y3, x4, y4, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x, &y);
    if (x >= x1 && x <= x2 && y >= y1 && y <= y4)
        printf("1\n");
    else
        printf("0\n");
    }
    
    return 0;
}
