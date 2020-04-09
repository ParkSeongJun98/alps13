#include <stdio.h>

int main(void){
    int n, i;
    int *arr;
    scanf("%d", &n);

    arr = (int*)malloc(sizeof(int)*n);
    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 11;

    for(i=3;i<n;i++){
        arr[i] = arr[i-2] * 4 + arr[i-1] + arr[i-3] * 2;
        arr[i] %= 100007;
    }
    printf("%d", arr[n-1]);
    return 0;
}