#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[10100];
    scanf("%d", &n);
    while (n--)
    {
        fflush(stdin);
        scanf("%s", s);
        printf("%.2lf\n", strlen(s) * .01);
    }
    return 0;
}