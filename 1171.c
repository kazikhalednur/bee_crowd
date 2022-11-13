#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int lis[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lis[i]);
    }
    for (int i = 0; i < n; i++)
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
    int lis1[2];
    lis1[0] = lis[0];
    lis1[1] = 1;
    int i = 1;
    while (1)
    {
        if (i == n + 1)
            break;
        if (lis[i] == lis1[0])
        {
            lis1[1] += 1;
            i++;
        }
        else
        {
            printf("%d aparece %d vez(es)\n", lis1[0], lis1[1]);
            lis1[0] = lis[i];
            lis1[1] = 0;
        }
    }
    return 0;
}