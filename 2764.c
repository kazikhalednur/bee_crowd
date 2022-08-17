#include <stdio.h>
#include <string.h>

int main()
{
    char date[30];
    char *d, *y, *m;
    scanf("%s", &date);

    d = strtok(date, "/");
    m = strtok(NULL, "/");
    y = strtok(NULL, "/");

    printf("%s/%s/%s\n", m, d, y);
    printf("%s/%s/%s\n", y, m, d);
    printf("%s-%s-%s\n", d, m, y);

    return 0;
}