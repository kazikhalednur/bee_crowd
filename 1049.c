#include <stdio.h>

int main()
{
    char s[15];
    char t[15];
    char v[15];
    scanf("%s", s);
    scanf("%s", t);
    scanf("%s", v);

    if (s[0] == 'v' && t[0] == 'a' && v[0] == 'c')
        printf("aguia\n");
    if (s[0] == 'v' && t[0] == 'a' && v[0] == 'o')
        printf("pomba\n");
    if (s[0] == 'v' && t[0] == 'm' && v[0] == 'o')
        printf("homem\n");
    if (s[0] == 'v' && t[0] == 'm' && v[0] == 'h')
        printf("vaca\n");
    if (s[0] == 'i' && t[0] == 'i' && v[2] == 'm')
        printf("pulga\n");
    if (s[0] == 'i' && t[0] == 'i' && v[2] == 'r')
        printf("lagarta\n");
    if (s[0] == 'i' && t[0] == 'a' && v[0] == 'h')
        printf("sanguessuga\n");
    if (s[0] == 'i' && t[0] == 'a' && v[0] == 'o')
        printf("minhoca\n");

    return 0;
}