#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = (char *)malloc(sizeof(s) * 1000);
    setbuf(stdin, NULL);
    scanf("%[^\n]", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    if (count <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}