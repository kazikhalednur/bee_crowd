#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x, y, sum;
    scanf("%lld %lld", &x, &y);
    sum = ((abs(y - x) + 1) * (x + y)) / 2;
    printf("%lld\n", sum);

    return 0;
}