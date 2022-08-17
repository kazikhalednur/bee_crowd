#include <stdio.h>

int main()
{

    int old_list[3], temp, new_list[3];
    scanf("%d %d %d", &old_list[0], &old_list[1], &old_list[2]);
    for (int i = 0; i < 3; i++)
    {
        new_list[i] = old_list[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (new_list[i] > new_list[j])
            {
                temp = new_list[i];
                new_list[i] = new_list[j];
                new_list[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", new_list[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", old_list[i]);
    }

    return 0;
}