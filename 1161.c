#include <stdio.h>

long long factorial(long long a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main()
{
    long long m, n, sum;
    while (scanf("%lld %lld", &m, &n) != EOF)
    {
        sum = factorial(m) + factorial(n);
        printf("%lld\n", sum);
    }
    return 0;
}