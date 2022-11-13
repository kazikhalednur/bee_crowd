#include <stdio.h>

int main()
{
    char str[10][1000];
    for (int i = 0; i < 10; i++){
        gets(str[i]);
    }
    printf("%s\n%s\n%s\n", str[2], str[6], str[8]);
    return 0;
}