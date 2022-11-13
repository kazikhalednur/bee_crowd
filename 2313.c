#include <stdio.h>

long long min(long long p, long long q)
{
    if (p < q)
        return p;
    else
        return q;
}

long long max(long long p, long long q)
{
    if (p > q)
        return p;
    else
        return q;
}

int main()
{
    long long a, b, c, m, n, o;
    scanf("%lld %lld %lld", &a, &b, &c);
    m = max(a, max(b, c));
    o = min(a, min(b, c));
    n = a + b + c - m - o;
    if (m < (n + o))
    {
        if (m == n && n == o)
        {
            printf("Valido-Equilatero\n");
        }
        else if (m != n && n != o)
        {
            printf("Valido-Escaleno\n");
        }
        else
        {
            printf("Valido-Isoceles\n");
        }
        if ((m * m) == ((n * n) + (o * o)))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}