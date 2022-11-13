#include <stdio.h>

int main()
{
    int i, j;
    while (scanf("%d %d", &i, &j) && i != j)
    {
        if (i > j)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}