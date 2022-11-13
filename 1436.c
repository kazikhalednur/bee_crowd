#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int cas[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int arr[m];
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j]);
        }
        cas[i] = arr[(m / 2)];
    }
    for (int i = 0; i < n; i++)
    {
        printf("Case %d: %d\n", i + 1, cas[i]);
    }
    return 0;
}