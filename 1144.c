#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n * 2; i++)
    {
        printf("%d ", i / 2 + 1);
        if (i % 2 != 0)
        {
            printf("%d %d\n", (i / 2 + 1) * (i / 2 + 1) + 1, (i / 2 + 1) * (i / 2 + 1) * (i / 2 + 1) + 1);
        }
        else
        {
            printf("%d %d\n", (i / 2 + 1) * (i / 2 + 1), (i / 2 + 1) * (i / 2 + 1) * (i / 2 + 1));
        }
    }

    return 0;
}