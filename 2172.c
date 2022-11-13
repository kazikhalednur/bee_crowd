#include <stdio.h>

int main()
{
    int i;
    long long j;
    while (scanf("%d %lld", &i, &j) && i > 0 && j > 0)
    {
        printf("%lld\n", i * j);
    }
    return 0;
}