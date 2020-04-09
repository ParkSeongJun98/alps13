//clear!
#include <stdio.h>

int main(void){
    int arr[50][50];
    int i, j;
    int r, c, temp;

    for(i=0;i<50;i++){
        arr[i][0] = 1;
    }

    for(i=1;i<50;i++){
        for(j=1;j<i;j++){
            arr[i][j] = (arr[i][j-1] + arr[i-1][j]) % 100000000;
        }
        arr[i][i] = (arr[i][i-1] * 2) %100000000;
    }

    scanf("%d", &r);
    scanf("%d", &c);

    if(r<c){
        temp = r;
        r = c;
        c = temp;
    }

    printf("%d", arr[r-1][c-1]);
    return 0;
}