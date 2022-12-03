#include <stdio.h>

int main()
{
    long r, w, l;
    int i = 1;
    while (scanf("%ld", &r) && r > 0)
    {
        scanf("%ld %ld", &w, &l);
        w /= 2;
        l /= 2;
        if (((w * w) + (l * l)) <= (r * r))
        {
            printf("Pizza %d fits on the table.\n", i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", i);
        }
        i++;
    }
    return 0;
}