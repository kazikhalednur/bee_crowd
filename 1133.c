#include <stdio.h>

int main()
{

    int n1, n2, temp;
    scanf("%d %d", &n1, &n2);
    if (n2 < n1)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (int i = n1 + 1; i < n2; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}