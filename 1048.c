#include <stdio.h>

int main()
{

    float salary, earned;
    scanf("%f", &salary);
    if (salary >= 0 && salary <= 400)
    {
        earned = (salary * 0.15);
        salary += earned;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 15 %\n");
    }
    else if (salary > 400 && salary <= 800)
    {
        earned = (salary * 0.12);
        salary += earned;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 12 %\n");
    }
    else if (salary > 800 && salary <= 1200)
    {
        earned = (salary * 0.1);
        salary += earned;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 10 %\n");
    }
    else if (salary > 1200 && salary <= 2000)
    {
        earned = (salary * 0.07);
        salary += earned;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 7 %\n");
    }
    else if (salary > 2000)
    {
        earned = (salary * 0.04);
        salary += earned;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}