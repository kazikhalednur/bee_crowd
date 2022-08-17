#include <stdio.h>

int main()
{
    long long w, x, y, z;
    scanf("%lld.%lld.%lld-%lld", &w, &x, &y, &z);
    printf("%03lld\n%03lld\n%03lld\n%02lld\n", w, x, y, z);
    return 0;
}