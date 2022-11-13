#include <stdio.h>

int main()
{
    int n, m;
    long long int arr[61];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("Fib(%d) = %lld\n", m, arr[m]);
    }
    return 0;
}