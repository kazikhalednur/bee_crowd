#include <stdio.h>
#include <string.h>

int main()
{
    char s1[21], s2[21];
    scanf("%s", s1);
    scanf("%s", s2);
    if (strcmp(s1, s2) > 0)
    {
        printf("%s\n", s2);
        printf("%s\n", s1);
    }
    else if (strcmp(s1, s2) < 0)
    {
        printf("%s\n", s1);
        printf("%s\n", s2);
    }
    return 0;
}