#include <stdio.h>

int main(void){
    int n, k;
    int i, j;
    int arr[31][31] = {0, };

    scanf("%d", &n);
    scanf("%d", &k);

    if(2*k-1 == n){
        printf("1");
        return 0;
    }

    for(i=2;i<=n;i++){
        arr[1][i] = i-1;
    }
    for(i=2;i<=k;i++){
        arr[i][2*i] = 1;
    }
    for(i=2;i<=k;i++){
        for(j=i*2+1;j<=n;j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j-2];
        }
    }
    j=1;
    for(i=0;i<k;i++){
        
    }
    printf("%d", arr[k][n]);
    return 0;
}