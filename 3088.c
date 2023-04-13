#include <stdio.h>
#include <string.h>

int main()
{
    char s[99999];
    int n;
    while (scanf("%[^\n]%*c", s) != EOF)
    {
        n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ' && (s[i + 1] == ',' || s[i + 1] == '.'))
            {
                for (int j = i; j < n; j++)
                    s[j] = s[j + 1];
                i--;
                n--;
            }
        }
        printf("%s\n", s);
    }
    return 0;
}