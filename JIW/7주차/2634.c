#include <stdio.h>

int main(void){
    int i, j;
    int **arr;
    int money, n, nowcoin, temp;
    int *coin;

    scanf("%d", &money);
    scanf("%d", &n);
    coin = (int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d", &coin[i]);
    }

    arr = (int **)malloc(sizeof(int *) * n);
    for(i=0;i<n;i++){
        arr[i] = (int *)malloc(sizeof(int) * (money + 1));
        arr[i][0] = 0;
    }
    nowcoin = coin[0];
    for(i=1;i<=money;i++){
        arr[0][i] = 99;
    }
    for(i=1;i<=(money/nowcoin);i++){
        arr[0][i*nowcoin] = i;
    }
    for(i=1;i<n;i++){
        nowcoin = coin[i];
        for(j=1 ; j<=money ; j++){
            arr[i][j] = arr[i-1][j];
        }

        for(j=nowcoin;j<=money;j++){
            temp = arr[i][j-nowcoin] + 1;
            if(temp < arr[i][j])
                arr[i][j] = temp;
        }
    }

    printf("%d", arr[n-1][money]);
    return 0;
}