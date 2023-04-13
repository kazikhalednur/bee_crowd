#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char *s;
        s = (char *)malloc(sizeof(s) * 1000);
        setbuf(stdin, NULL);
        scanf("%[^\n]", s);
        printf("I am Toorg!\n");
    }
    return 0;
}