//clear!
#include <stdio.h>

int main(void){
    int stair[100000];
    int n, i;
    stair[1]=1;
    stair[2]=2;
    stair[3]=4;

    scanf("%d", &n);
    for(i=4;i<=n;i++){
        stair[i] = (stair[i-3] + stair[i-2] + stair[i-1])%1000;
    }

    printf("%d", stair[n]);
    return 0;
}