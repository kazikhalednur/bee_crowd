#include <stdio.h>
#include <string.h>

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
        else if (i == 1)
        {
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                {
                    printf("|");
                }
                else if (j == 9)
                {
                    printf("Roberto");
                    j += strlen("Roberto") - 1;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (i == 3)
        {
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                {
                    printf("|");
                }
                else if (j == 9)
                {
                    printf("5786");
                    j += strlen("5786") - 1;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (i == 5)
        {
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                {
                    printf("|");
                }
                else if (j == 9)
                {
                    printf("UNIFEI");
                    j += strlen("UNIFEI") - 1;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                {
                    printf("|");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}