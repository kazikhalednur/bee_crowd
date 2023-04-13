#include <stdio.h>
#include <string.h>

int main()
{
    int n, len1, len2;
    char s1[2000], s2[2000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", s1, s2);
        len1 = strlen(s1);
        len2 = strlen(s2);
        if (len1 == len2)
            if (strcmp(s1, s2) == 0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        else if (len1 < len2)
            printf("nao encaixa\n");
        else if (strstr(&s1[len1 - len2 - 1], s2))
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}