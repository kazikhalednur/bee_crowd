#include <stdio.h>

int main()
{
    double n, x;
    double c = 0, r = 0, s = 0;
    char a;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %c", &x, &a);
        switch (a)
        {
        case 'C':
            c += x;
            break;
        case 'R':
            r += x;
            break;
        case 'S':
            s += x;
            break;
        }
    }
    printf("Total: %.0lf cobaias\n", c + r + s);
    printf("Total de coelhos: %.0lf\n", c);
    printf("Total de ratos: %.0lf\n", r);
    printf("Total de sapos: %.0lf\n", s);
    double rate;
    rate = (c * 100) / (c + r + s);
    printf("Percentual de coelhos: %.2lf %\n", rate);
    rate = (r * 100) / (c + r + s);
    printf("Percentual de ratos: %.2lf %\n", rate);
    rate = (s * 100) / (c + r + s);
    printf("Percentual de sapos: %.2lf %\n", rate);
    return 0;
}