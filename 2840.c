#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main()
{
    long long r, l;
    long double res;
    scanf("%lld %lld", &r, &l);
    res = (4 * PI * pow(r, 3)) / 3;
    printf("%ld\n", (long)(l / res));
    return 0;
}