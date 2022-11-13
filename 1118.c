#include <stdio.h>

int media()
{
    float n, arr[2];
    int i = 0;
    while (1)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            arr[i] = n;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if (i == 2)
        {
            printf("media = %.2f\n", (arr[0] + arr[1]) / 2);
            break;
        }
    }
}

int main()
{
    int j;
    media();
    do
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &j);
        if (j == 1)
        {
            media();
        }
    } while (j != 2);
    return 0;
}