#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n, arr[26], temp = 0, flag = 0, count = 0;
    while (fgets(s, sizeof(s), stdin))
    {
        if (s[0] == '\n')
            printf("\n");
        else
        {
            for (int i = 0; i < 26; i++)
            {
                arr[i] = 0;
            }
            n = strlen(s);
            for (int i = 0; i < n; i++)
            {
                arr[s[i] - 97] = 1;
            }
            temp = 0;
            flag = 0;
            count = 0;
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] > 0 && temp == 0 && flag == 0)
                {
                    printf("%c:", 97 + i);
                    temp = 1;
                    flag = 1;
                    count++;
                }
                else if (arr[i] > 0 && temp == 0 && flag == 1)
                {
                    printf(", %c:", 97 + i);
                    temp = 1;
                }
                if (arr[i] == 0 && temp == 1)
                {
                    printf("%c", 97 + i - 1);
                    temp = 0;
                }
                if (i == 25 && temp == 1)
                {
                    printf("%c", 97 + i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}