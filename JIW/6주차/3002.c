/* #include <stdio.h>

int search(int *arr, int number, int a, int b){
    int half = (a+b) / 2;

    if(arr[half] == number){
        return half+1;
    }

    if(a == half){
        if(b == half){
            return -1;
        }
        else{
            search(arr, number, b, b);
        }
    }
    if(arr[half] < number){
        search(arr, number, half+1, b);
    }
    else{
        search(arr, number, a, half-1);
    }
}

int main(void){
    int n, m, i;
    int *arr, *questions;

    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    questions = (int*)malloc(sizeof(int)*m);

    for(i=0;i<m;i++){
        scanf("%d", &questions[i]);
    }

    for(i=0;i<m;i++){
        printf("%d ", search(arr, questions[i], 0, n-1));
    }

    return 0;
} */


//이진탐색으로 풀었는데 왜 시간초과가 뜨지?

/* #include <stdio.h>

int arr[1000001];
int number;

int search(int a, int b){
    int half;

    if(a==b){
        if(arr[a] == number)
            return a;
        else
            return -1;
    }

    half = ( a + b ) / 2;

    if(arr[half] <= number){
        if(arr[half] == number){
            return half;
        }
        search(half+1, b);
    }
    else{
        search(a, half-1);
    }
}

int main(void){
    int n, m, i;
    int *questions;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    questions = (int*)malloc(sizeof(int)*m);

    for(i=0;i<m;i++){
        scanf("%d", &questions[i]);
    }

    for(i=0;i<m;i++){
        number = questions[i];
        printf("%d ", search(1, n));
    }

    return 0;
} */

#include <stdio.h>
int data[1000001];

int find(int left, int right, int number){
    int mid, i;

    if(right - left < 3){
        for(i=left;i<=right;i++){
            if(data[i] == number){
                return i;
            }
        }
        return -1;
    }
    mid = ( left + right ) /2;

    if(data[mid] >= number){
        if(data[mid] == number){
            return mid;
        }
        find(left, mid-1, number);
    }
    else{
        find(mid+1, right, number);
    }
}

int main(void){
    int n, m, i;
    int *questions;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        scanf("%d", &data[i]);
    }

    scanf("%d", &m);
    questions = (int*)malloc(sizeof(int)*m);

    for(i=0;i<m;i++){
        scanf("%d", &questions[i]);
    }

    for(i=0;i<m;i++){
        printf("%d ", find(1, n, questions[i]));
    }

    return 0;
}