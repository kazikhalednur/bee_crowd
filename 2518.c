#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, c, l;
    long double r;
    while (scanf("%d %d %d %d", &n, &h, &c, &l) != EOF)
    {
        r = n * sqrt((h*h) + (c*c));
        r *= l;
        printf("%.4llf\n", r/10000);
    }
    return 0;
}