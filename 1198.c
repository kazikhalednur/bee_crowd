#include <stdio.h>
#include <stdlib.h>

int main(){
    long long a, b;
    while(scanf("%lld %lld", &a, &b) != EOF){
        if (a > b) printf("%lld\n", (long long)a-b);
        else printf("%lld\n", (long long)b-a);
        
    }
    return 0;
}