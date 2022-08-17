#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n % 2 == 0)
        {
            continue;
        }
        for (int i = 0; i < ((n + 1) / 2); i++)
        {
            for (int j = 0; j < (((n - 1) / 2) + i + 1); j++)
            {
                if (i != 0)
                {
                    if (j >= (((n - 1) / 2) - i))
                    {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                else
                {
                    if (j == ((n - 1) / 2))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < (((n - 1) / 2) + i + 1); j++)
            {
                if (i == 0)
                {
                    if (j == ((n - 1) / 2))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else if (i == 1)
                {
                    if (j >= (((n - 1) / 2) - i))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}