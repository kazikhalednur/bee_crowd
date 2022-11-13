#include <stdio.h>

int main()
{
    int m, n, i, j, temp, res, count;
    while (scanf("%d %d", &m, &n) && m > 0 && n > 0)
    {
        int lis[n];
        // input
        for (i = 0; i < n; i++)
        {
            scanf("%d", &lis[i]);
        }

        // sorting
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (lis[i] > lis[j])
                {
                    temp = lis[i];
                    lis[i] = lis[j];
                    lis[j] = temp;
                }
            }
        }
        res = 0;
        i = 0;
        count = 0;
        while (1)
        {
            if (i == n)
            {
                break;
            }
            if (lis[i] == lis[i + 1])
            {
                count++;
            }
            else
            {
                count > 0 ? res++ : '\0';
                count = 0;
            }
            i++;
        }

        printf("%d\n", res);
    }
    return 0;
}