#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case 0:
            for (int j = 0; j < 39; j++)
            {
                printf("-");
            }
            printf("\n");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            for (int j = 0; j < 39; j++)
            {
                if (j == 0 || j == 38)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n");
            break;
        case 6:
            for (int j = 0; j < 39; j++)
            {
                printf("-");
            }
            printf("\n");
            break;
        default:
            break;
        }
    }

    return 0;
}