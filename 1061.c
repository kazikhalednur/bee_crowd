#include <stdio.h>

int main()
{
    int d, d1, d2, h, h1, h2, m, m1, m2, s, s1, s2;
    // printf("Dia ")
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    d = d2 - d1;
    h = h2 - h1;
    m = m2 - m1;
    s = s2 - s1;

    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 24;
        d--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);

    return 0;
}