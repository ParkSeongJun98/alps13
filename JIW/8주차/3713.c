#include <stdio.h>

int main(void){
    int n, i;
    int *arr;

    scanf("%d", &n);
    
    arr = (int*)malloc(sizeof(int) * n);
    
    arr[0] = 1;
    arr[1] = 3;

    for(i=2;i<n;i++){
        arr[i] = arr[i-2] * 2 + arr[i-1];
        if(arr[i] > 100007){
            arr[i] %= 100007;
        }
    }
    printf("%d", arr[n-1]);
    return 0;
}