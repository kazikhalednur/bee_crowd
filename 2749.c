#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 0 || i == 6)
        {
            for (int j = 0; j < 39; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        else if (i == 2 || i == 4)
        {
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else if (i == 1)
        {
            printf("|x = 35");
            for (int j = 0; j < 32; j++)
            {
                if (j == 31)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else if (i == 3)
        {
            for (int j = 0; j < 34; j++)
            {
                if (j == 0 || j == 33)
                    printf("|");
                else if (j == 16)
                    printf("x = 35");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else if (i == 5)
        {
            for (int j = 0; j < 32; j++)
            {
                if (j == 0)
                    printf("|");
                else
                    printf(" ");
            }
            printf("x = 35|\n");
        }
    }
    return 0;
}