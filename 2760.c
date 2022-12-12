#include <stdio.h>

int main()
{
    char s1[101], s2[101], s3[101];
    int i = 0;

    setbuf(stdin, NULL);
    scanf(" %[^\n]", s1);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", s2);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", s3);

    printf("%s%s%s\n", s1, s2, s3);
    printf("%s%s%s\n", s2, s3, s1);
    printf("%s%s%s\n", s3, s1, s2);

    for (i = 0; i < 10; i++)
    {
        if (s1[i] == '\0')
            break;
        printf("%c", s1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (s2[i] == '\0')
            break;
        printf("%c", s2[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (s3[i] == '\0')
            break;
        printf("%c", s3[i]);
    }
    printf("\n");

    return 0;
}