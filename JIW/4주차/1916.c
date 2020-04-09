//clear!
#include <stdio.h>


unsigned int fibo(unsigned int n, int *arr){
    if(arr[n]>0)
        return arr[n];
    arr[n] = fibo(n-1, arr) + fibo(n-2, arr)%10009;
    return (fibo(n-1, arr) + fibo(n-2, arr))%10009;
}
int main(void){
    int n;
    int arr[201] = {0, };
    arr[1] = 1;
    arr[2] = 1;
    scanf("%d", &n);

    printf("%d", fibo(n, arr));
    return 0;
}