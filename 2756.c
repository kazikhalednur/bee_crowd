#include <stdio.h>

int main()
{
    int a = 5;
    int row = 2 * a - 1;
    for (int i = 0; i < row; i++)
    {
        printf("   ");
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < a - 1; j++)
            {
                printf(" ");
            }
            printf("%c", 65);
        }
        else if (i < a)
        {
            for (int j = 0; j < a + i; j++)
            {
                if (j == (a - 1 - i) || j == (a - 1 + i))
                {
                    printf("%c", 65 + i);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            int b = row - i - 1;
            for (int j = 0; j < b + a; j++)
            {
                if (j == (a - 1 - b) || j == (a - 1 + b))
                {
                    printf("%c", 65 + b);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}