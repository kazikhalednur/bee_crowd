#include <stdio.h>

int main()
{
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < 16; i++)
    {
        printf("|%7d    |%5o    |%8X       |\n", i, i, i);
    }
    printf("---------------------------------------\n");
    return 0;
}