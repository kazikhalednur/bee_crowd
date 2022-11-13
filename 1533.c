#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) && n > 0)
    {
        int arr[n][2], temp[2];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i][0]);
            arr[i][1] = i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i][0] < arr[j][0])
                {
                    temp[0] = arr[i][0];
                    temp[1] = arr[i][1];

                    arr[i][0] = arr[j][0];
                    arr[i][1] = arr[j][1];

                    arr[j][0] = temp[0];
                    arr[j][1] = temp[1];
                }
            }
        }
        printf("%d\n", arr[1][1] + 1);
    }
    return 0;
}