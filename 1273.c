#include <stdio.h>
#include <string.h>

int main()
{
    int n, max, a = 0;
    while (scanf("%d", &n) && n)
    {
        if (a == 1)
            printf("\n");
        char s[n][1000];
        max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%s", s[i]);
            if (max < strlen(s[i]))
                max = strlen(s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (max == strlen(s[i]))
                printf("%s\n", s[i]);
            else
            {
                for (int j = 0; j < (max - strlen(s[i])); j++)
                {
                    printf(" ");
                }
                printf("%s\n", s[i]);
            }
        }
        a = 1;
    }

    return 0;
}