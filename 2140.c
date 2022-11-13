#include <stdio.h>

int main()
{
    int m, n, sub, count;
    while (scanf("%d %d", &m, &n) && m > 0 && n > 0)
    {
        count = 0;
        sub = n - m;
        int arr[6] = {2, 5, 10, 20, 50, 100};
        for (int i = 5; i > -1; i--)
        {
            if (sub >= arr[i] && sub > 0)
            {
                sub -= arr[i];
                count++;
            }
        }
        if (sub == 0 && count == 2)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}