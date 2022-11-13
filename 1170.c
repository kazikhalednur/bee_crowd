#include <stdio.h>

int main()
{
    int n, count;
    float m;
    scanf("%d", &n);
    while (n--)
    {
        count = 0;
        scanf("%f", &m);
        while (m > 1)
        {
            m /= 2;
            count++;
        }
        printf("%d dias\n", count);
    }
    return 0;
}