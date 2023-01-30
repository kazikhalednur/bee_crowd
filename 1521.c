#include <stdio.h>

int main()
{
    int n, k;
    while (scanf("%d", &n) && n != 0)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);
        for (int i = 1; i <= n; i++)
        {
            if (i == arr[i - 1])
            {
                printf("%d\n", arr[i - 1]);
            }
        }
    }
    return 0;
}