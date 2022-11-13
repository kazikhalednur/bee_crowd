#include <stdio.h>

int main()
{
    int n, m, temp;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int arr1[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr1[i]);
            printf("%d\n", arr[(arr1[i] - 1)]);
        }
    }
    return 0;
}