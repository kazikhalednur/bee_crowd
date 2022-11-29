#include <stdio.h>

int main()
{
    int n, i, j, k, l, m, o, count;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        count = 0;
        scanf("%d %d", &j, &k);
        if (n == 2 && j != k)
            count = 2;
        else
        {
            m = j;
            o = k;
            for (i = 2; i < n; i++)
            {
                scanf("%d", &l);
                if (((k > j) && (k > l)) || ((j > k) && (l > k)))
                    count++;
                j = k;
                k = l;
            }
            if (((m > o) && (m > l)) || ((o > m) && (l > m)))
                count++;
            if (((l > j) && (l > m)) || ((j > l) && (m > l)))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}