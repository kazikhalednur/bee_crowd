#include <stdio.h>

int main()
{
    int m, n, o;
    float sum = 0;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d %d", &n, &o);
        switch (n)
        {
        case 1001:
            sum += (1.5 * o);
            break;
        case 1002:
            sum += (2.5 * o);
            break;
        case 1003:
            sum += (3.5 * o);
            break;
        case 1004:
            sum += (4.5 * o);
            break;
        case 1005:
            sum += (5.5 * o);
            break;
        }
    }
    printf("%.2f\n", sum);
    return 0;
}