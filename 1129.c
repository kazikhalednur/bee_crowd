#include <stdio.h>

int main()
{
    int m;
    while (scanf("%d", &m) && m > 0)
    {
        for (int k = 0; k < m; k++)
        {
            int arr[5];
            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &arr[i]);
            }
            int o = 0, p = 0;
            int q = 0;
            for (int i = 0; i < 5; i++)
            {
                if (arr[i] <= 127)
                {
                    o++;
                    q = i;
                }
                else
                {
                    p++;
                }
            }
            if (o == 1 && p == 4)
            {
                printf("%c\n", q + 65);
            }
            else
            {
                printf("*\n");
            }
        }
    }
    return 0;
}