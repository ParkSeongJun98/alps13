#include <stdio.h>

int main(void){
    int n;
    int out = 1;
    scanf("%d", &n);

    if(n%3 == 0){
        n /= 3;
        for(;n>0;n--){
            out *= 2;
            if(out > 100000007){
                out %= 100000007;
            }
        }
        printf("%d", out);
    }
    else{
        printf("0");
    }
    return 0;
}