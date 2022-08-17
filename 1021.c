#include <stdio.h>

int main()
{
    double x, z;
    int y;
    scanf("%lf", &x);
    printf("NOTAS:\n");
    y = x / 100;
    z = x - y * 100;
    printf("%d nota(s) de R$ 100.00\n", y);
    y = z / 50;
    z = z - y * 50;
    printf("%d nota(s) de R$ 50.00\n", y);
    y = z / 20;
    z = z - y * 20;
    printf("%d nota(s) de R$ 20.00\n", y);
    y = z / 10;
    z = z - y * 10;
    printf("%d nota(s) de R$ 10.00\n", y);
    y = z / 5;
    z = z - y * 5;
    printf("%d nota(s) de R$ 5.00\n", y);
    y = z / 2;
    z = z - y * 2;
    printf("%d nota(s) de R$ 2.00\n", y);
    printf("MOEDAS:\n");
    y = z / 1;
    z = z - y * 1;
    printf("%d moeda(s) de R$ 1.00\n", y);
    y = z / .5;
    z = z - y * .5;
    printf("%d moeda(s) de R$ 0.50\n", (int)y);
    y = z / .25;
    z = z - y * .25;
    printf("%d moeda(s) de R$ 0.25\n", (int)y);
    y = z / .1;
    z = z - y * .1;
    printf("%d moeda(s) de R$ 0.10\n", (int)y);
    y = z / .05;
    z = z - y * .05;
    printf("%d moeda(s) de R$ 0.05\n", (int)y);
    y = z / .01;
    z = z - y * .01;
    printf("%d moeda(s) de R$ 0.01\n", (int)y);
    return 0;
}