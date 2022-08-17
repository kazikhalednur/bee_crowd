#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int num_list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_list[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num_list[i] == 0)
        {
            printf("NULL\n");
        }
        else
        {
            if (num_list[i] % 2 == 0)
            {
                printf("EVEN ");
            }
            else
            {
                printf("ODD ");
            }
            if (num_list[i] > 0)
            {
                printf("POSITIVE\n");
            }
            else
            {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}