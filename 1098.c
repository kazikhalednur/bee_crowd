#include <stdio.h>

int main()
{
    float i = 0, j = 0;
    while (i <= 2.1)
    {
        if ((i > 0 && i < 1) || (i > 1 && i < 2))
        {
            printf("I=%.1f J=%.1f\n", i, j + 1 + i);
            printf("I=%.1f J=%.1f\n", i, j + 2 + i);
            printf("I=%.1f J=%.1f\n", i, j + 3 + i);
        }
        else
        {
            printf("I=%d J=%d\n", (int)i, (int)j + 1 + (int)i);
            printf("I=%d J=%d\n", (int)i, (int)j + 2 + (int)i);
            printf("I=%d J=%d\n", (int)i, (int)j + 3 + (int)i);
        }
        i += 0.2;
    }

    return 0;
}
