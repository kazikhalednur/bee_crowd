#include <stdio.h>

int main()
{

    int n1, n2;
a:
    scanf("%d %d", &n1, &n2);
    while (n1 > 0 && n2 > 0)
    {
        int max, min, sum;
        max = n1;
        min = n2;
        if (max < n2)
        {
            max = n2;
            min = n1;
        }
        sum = 0;
        for (int i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        goto a;
    }
    return 0;
}