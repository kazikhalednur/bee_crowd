#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    s = (char *)malloc(sizeof(s) * 1000);
    while (scanf("%s", s) != EOF)
    {
        int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int arr1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == '0')
                arr[0]++;
            else if (s[i] == '1')
                arr[1]++;
            else if (s[i] == '2')
                arr[2]++;
            else if (s[i] == '3')
                arr[3]++;
            else if (s[i] == '4')
                arr[4]++;
            else if (s[i] == '5')
                arr[5]++;
            else if (s[i] == '6')
                arr[6]++;
            else if (s[i] == '7')
                arr[7]++;
            else if (s[i] == '8')
                arr[8]++;
            else if (s[i] == '9')
                arr[9]++;
        }
        int max = arr[0], j = 0;
        for (int i = 0; i < 10; i++)
        {
            if (max <= arr[i])
            {
                max = arr[i];
                arr1[j] = i;
                j++;
            }
        }
        int maximun = arr1[0];
        for (int i = 0; i < j; i++)
        {
            if (maximun < arr1[i])
            {
                maximun = arr1[i];
            }
        }
        printf("%d\n", maximun);
    }
    return 0;
}