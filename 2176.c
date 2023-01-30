#include <stdio.h>

int main()
{
    int n = 0;
    char s[101];
    scanf("%s", s);
    for (int i = 0; i <= 101 && s[i] != '/0'; i++)
    {
        if (s[i] == '1')
            n++;
    }
    if (n % 2 == 0)
        printf("%s0\n", s);
    else
        printf("%s1\n", s);
    return 0;
}