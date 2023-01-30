#include <stdio.h>

int main()
{
    double arr[12][12], sum;
    int m;
    char c;
    scanf("%d %c", &m, &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    sum = 0.0;
    for (int i = 0; i < 12; i++)
    {
        sum += arr[m][i];
    }
    if (c == 'S')
        printf("%.1lf\n", sum);
    else if (c == 'M')
        printf("%.1lf\n", sum / 12.0);
    return 0;
}