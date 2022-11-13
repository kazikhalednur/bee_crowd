#include <stdio.h>

int main()
{
    int num, i, j, k, l, even[5], odd[5];
    for (i = 0, j = 0, k = 0; i < 15; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even[j] = num;
            if (j == 4)
            {
                for (l = 0; l < 5; l++)
                {
                    printf("par[%d] = %d\n", l, even[l]);
                }
                j = -1;
            }
            j++;
        }
        else
        {
            odd[k] = num;
            if (k == 4)
            {
                for (l = 0; l < 5; l++)
                {
                    printf("impar[%d] = %d\n", l, odd[l]);
                }
                k = -1;
            }
            k++;
        }
    }
    for (l = 0; l < k; l++)
    {
        printf("impar[%d] = %d\n", l, odd[l]);
    }
    for (l = 0; l < j; l++)
    {
        printf("par[%d] = %d\n", l, even[l]);
    }
    return 0;
}