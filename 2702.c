#include <stdio.h>

int main()
{
    int x, y, z, a, b, c, sum = 0;
    scanf("%d %d %d %d %d %d", &x, &y, &z, &a, &b, &c);
    (x < a) ? sum += (a - x) : '\0';
    (y < b) ? sum += (b - y) : '\0';
    (z < c) ? sum += (c - z) : '\0';
    printf("%d\n", sum);
    return 0;
}