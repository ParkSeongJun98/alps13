#include <stdio.h>

int main(void){
    int n, i, j;
    int *arr;

    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    arr[0] = 2;
    arr[1] = 7;
    arr[2] = 22;

    for(i=3;i<n;i++){
        arr[i] = arr[i-2];
        for(j=0;j<i;j++){
            arr[i] += arr[j] * 2;
        }
        arr[i] += 2;
        arr[i] %= 100007;
    }

    printf("%d", arr[n-1]);
    return 0;
}