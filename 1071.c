#include <stdio.h>

int main()
{

    int n1, n2, sum;
    sum = 0;
    scanf("%d %d", &n1, &n2);
    for (int i = n1 - 1; i > n2; i--)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}