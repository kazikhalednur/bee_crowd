#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int X[n], min[2];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    min[0] = X[0];
    min[1] = X[1];
    for (int i = 1; i < n; i++)
    {
        if (X[i] < min[0])
        {
            min[0] = X[i];
            min[1] = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min[0], min[1]);
    return 0;
}