#include <stdio.h>
#include <string.h>

int main()
{
    int n, m = 0, p;
    char s[27];
    while (scanf("%s", s) != EOF)
    {
        p = 0;
        scanf("%d", &n);
        m = strlen(s) % 3;
        printf("$");
        if (m != 0)
        {
            for (int i = 0; i < m; i++)
            {
                printf("%c", s[i]);
            }
            p = 3;
        }
        for (int i = m; i < strlen(s); i++)
        {
            if (p == 3)
            {
                printf(",");
                p = 0;
            }
            printf("%c", s[i]);
            p++;
        }
        printf(".%02d\n", n);
    }
    return 0;
}