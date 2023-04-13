#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    char alp[] = "qwertyuiopasdfghjklzxcvbnm";
    int m, n, sum;
    scanf("%d", &m);
    for (int j = 0; j < m; j++)
    {
        setbuf(stdin, NULL);
        scanf("%[^\n]", s);
        n = strlen(s);
        sum = 0;
        for (int i = 0; i < 26; i++)
            for (int j = 0; j < n; j++)
            {
                if (alp[i] == s[j])
                {
                    sum++;
                    break;
                }
            }
        if (sum == 26)
            printf("frase completa\n");
        else if (sum >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
    return 0;
}