#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, grp_num, img_num, num;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &grp_num, &img_num);
        int n[grp_num];
        for (int i = 0; i < grp_num; i++)
        {
            scanf("%d", &num);
            n[i] = abs(img_num - num);
        }
        int x[2];
        x[0] = n[0];
        x[1] = 0;
        for(int i = 1; i < grp_num; i++)
        {
            if(n[i] < x[0]){
                x[0] = n[i];
                x[1] = i;
            }
        }
        printf("%d", x[1]+1);

    }
    return 0;
}