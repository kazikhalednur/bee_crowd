#include <stdio.h>

int main()
{
    double arr[12][12], sum;
    int n;
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
    for (int i = 1; i < 6; i++)
    {
        for (int j = 12 - i; j < 12; j++)
        {
            sum += arr[i][j];
            n++;
        }
    }
    for (int i = 6; i < 11; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            sum += arr[i][j];
            n++;
        }
    }
    if (c == 'S')
        printf("%.1lf\n", sum);
    else if (c == 'M')
        printf("%.1lf\n", sum / n);
    return 0;
}