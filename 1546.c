#include <stdio.h>

int main()
{
    int m, n, o;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            case 4:
                printf("Odranoel\n");
                break;
            default:
                break;
            }
        }
    }
    return 0;
}