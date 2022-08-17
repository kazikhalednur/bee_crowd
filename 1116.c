#include <stdio.h>
 
int main() {
 
    int n;
    float n1, n2, res;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%f %f", &n1, &n2);
        if (n2 != 0){
            res = n1 / n2; 
            printf("%.1f\n", res);
        } else {
            printf("divisao impossivel\n");
        }
    }
 
    return 0;
}