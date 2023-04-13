#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char *s;
        s = (char *)malloc(sizeof(s) * 1000);
        scanf("%s", s);
        int sum = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            switch (s[i])
            {
            case '1':
                sum += 2;
                break;
            case '2':
                sum += 5;
                break;
            case '3':
                sum += 5;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 3;
                break;
            case '8':
                sum += 7;
                break;
            case '9':
                sum += 6;
                break;
            case '0':
                sum += 6;
                break;

            default:
                break;
            }
        }
        printf("%d leds\n", sum);
    }
    return 0;
}