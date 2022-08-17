#include <stdio.h>

int main()
{
    int x, year, month, day;
    scanf("%d", &x);
    year = x / 365;
    month = (x % 365) / 30;
    day = (x % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    return 0;
}