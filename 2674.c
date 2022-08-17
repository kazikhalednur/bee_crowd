#include <stdio.h>

long is_prime(long num)
{
    if (num <= 1)
    {
        return 0;
    }
    else if ((num == 2) || (num == 3))
    {
        return 1;
    }
    else if ((num % 2 == 0) || (num % 3 == 0))
    {
        return 0;
    }
    else
    {
        for (long l = 5; l * l <= num ; l += 6)
        {
            if ((num % l == 0) || (num % (l + 2) == 0))
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    long num;
    while (scanf("%ld", &num) != EOF){
        if(is_prime(num)){
            long x;
            int count = 0;
            while (num > 0){
                x = num % 10;
                if (!is_prime(x)){
                    count ++;
                }
                num /= 10;
            }
            if(count == 0) {
                printf("Super\n");
            } else {
                printf("Primo\n");
            }
        } else {
            printf("Nada\n");
        }
    }
    return 0;
}