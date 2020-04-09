#include <stdio.h>

main(void){
    int n, i;
    int *arr;

    scanf("%d", &n);

    arr = (int *) malloc (sizeof(int)*n);
    
    arr[0] = 1;
    arr[1] = 2;

    for(i=2;i<n;i++){
        arr[i] = arr[i-2] + arr[i-1];
        arr[i] %= 100000007;
    }

    printf("%d", arr[n-1]);
    
    return 0;
}