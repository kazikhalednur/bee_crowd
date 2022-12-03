#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    long double v , d;
    while (scanf("%llf %llf", &v, &d) != EOF)
    {
        printf("ALTURA = %.2lf\n", (double)(v / (PI * pow((d / 2), 2))));
        printf("AREA = %.2lf\n", (double)(PI * pow((d / 2), 2)));
    }
    return 0;
}