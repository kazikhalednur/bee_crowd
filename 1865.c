#include <stdio.h>

int main()
{
    int n, m;
    char s[1000];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        scanf("%d", &m);
        if (s[0] == 'T' && s[1] == 'h' && s[2] == 'o' && s[3] == 'r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}