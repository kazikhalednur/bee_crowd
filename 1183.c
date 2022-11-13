#include <stdio.h>

int main()
{
    double arr[12][12], sum;
    char c;
    scanf("%c", &c);
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
        for (int j = i + 1; j < 12; j++)
        {
            sum += arr[i][j];
        }
    }
    if (c == 'S')
        printf("%.1lf\n", sum);
    else if (c == 'M')
        printf("%.1lf\n", sum / 66.0);
    return 0;
}