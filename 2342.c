#include <stdio.h>

int main()
{
    long long m;
    int n, o;
    char p;
    scanf("%lld %d %c %d", &m, &n, &p, &o);
    if (p == '*')
    {
        if (m >= (n * o))
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }
    else if (p == '+')
    {
        if (m >= (n + o))
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }
    return 0;
}