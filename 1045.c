#include <stdio.h>

int main()
{

    double A, B, C, num[3], temp;
    scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    A = num[0];
    B = num[1];
    C = num[2];
    if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((A * A) == (B * B + C * C))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((A * A) > (B * B + C * C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((A * A) < (B * B + C * C))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((A == B && A != C) || (B == C && B != A) || (A == C && A != B))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}