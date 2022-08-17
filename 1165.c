#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    long num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &num);
        if (num <= 1)
        {
            printf("%ld nao eh primo\n", num);
        }
        else if ((num == 2) || (num == 3))
        {
            printf("%ld eh primo\n", num);
        }
        else if ((num % 2 == 0) || (num % 3 == 0))
        {
            printf("%ld nao eh primo\n", num);
        }
        else
        {
            temp = 0;
            for (int j = 5; j <= sqrt(num); j += 6)
            {
                if ((num % j == 0) || (num % (j + 2) == 0))
                {
                    temp++;
                    printf("%ld nao eh primo\n", num);
                    break;
                }
            }
            if (temp == 0)
            {
                printf("%ld eh primo\n", num);
            }
        }
    }
    return 0;
}