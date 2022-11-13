#include <stdio.h>

int main()
{
    int res[9] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int num, max, count;
    scanf("%d", &num);
    max = 0;
    for (int i = 0; i < 9; i++)
    {
        if (num < res[i])
        {
            max = i - 1;
            break;
        }
    }
    count = 0;
    while (num > 0 && max >= 0)
    {
        if (num >= res[max])
        {
            num = num - res[max];
            count++;
        }
        else
        {
            max--;
        }
    }
    printf("%d\n", count);
    return 0;
}