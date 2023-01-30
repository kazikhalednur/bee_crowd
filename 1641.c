#include <stdio.h>

int main()
{
    int r, w, l, i = 1;
    while (scanf("%d", &r) && r > 0)
    {
        scanf("%d %d", &w, &l);
        if (((w * w) + (l * l)) <= (r * r * 4))
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