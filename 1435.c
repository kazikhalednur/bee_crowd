#include <stdio.h>

int main()
{
    int n, r;
    while (scanf("%d", &n) && n)
    {
        if (n % 2 != 0)
            r = n / 2 + 1;
        else
            r = n / 2;

        for (int i = 1; i <= r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (j == 0)
                    printf("%3d", j + 1);
                else
                    printf(" %3d", j + 1);
            }
            printf("\n");
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (n % 2 != 0)
        //         {
        //             if ((n % 2 + 1) >= i)
        //             {
        //                 printf("%3d ", i + 1);
        //             }
        //             else
        //             {
        //                 printf("%3d ", n - i);
        //             }
        //         }
        //     }
        //     printf("\n");
        // }
        // printf("\n");
    }
    return 0;
}