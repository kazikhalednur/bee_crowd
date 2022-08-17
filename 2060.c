#include <stdio.h>

int main()
{
    int n, num;
    int count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            count_2++;
        if (num % 3 == 0)
            count_3++;
        if (num % 4 == 0)
            count_4++;
        if (num % 5 == 0)
            count_5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", count_2, count_3, count_4, count_5);
    return 0;
}