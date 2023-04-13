#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[27];
    while (scanf("%s", s) != EOF)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%c", s[arr[i] - 1]);
        }
        printf("\n");
    }
    return 0;
}