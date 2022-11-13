#include <stdio.h>

int main()
{
    int m, n;
    float res;
    scanf("%d %d", &m, &n);
    switch (m)
    {
    case 1:
        res = n * 4.00;
        break;
    case 2:
        res = n * 4.50;
        break;
    case 3:
        res = n * 5.00;
        break;
    case 4:
        res = n * 2.00;
        break;
    case 5:
        res = n * 1.50;
        break;
    }
    printf("Total: R$ %.2f\n", res);
    return 0;
}