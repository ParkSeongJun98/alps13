#include <stdio.h>

struct Schedule{
    char name[100];
    int year;
    int month;
    int day;
};

void SWAP(struct Schedule *arr, int a, int b){
    struct Schedule temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int stringComp(char a[], char b[]){
    int i = 0;
    while(a[i] != 0 && b[i] != 0){
        if(a[i] != b[i]){
            break;
        }
        i++;
    }
    
    if(a[i] > b[i]){
        return 1;
    }

    return 0;
}
void sort(struct Schedule *arr, int n){
    int i, j;
    struct Schedule temp;

    // 이름 -> 일 -> 월 -> 년 순으로 정렬
    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(stringComp(arr[j].name,arr[j+1].name)){
                SWAP(arr, j, j+1);
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].day > arr[j+1].day){
                SWAP(arr, j, j+1);
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].month > arr[j+1].month){
                SWAP(arr, j, j+1);
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].year > arr[j+1].year){
                SWAP(arr, j, j+1);
            }
        }
    }
}

int main(void){
    int n, m, i;
    struct Schedule *arr;
    scanf("%d", &n);

    arr = (struct Schedule*)malloc(sizeof(struct Schedule)*n);

    for(i=0;i<n;i++){
        scanf("%s", &arr[i].name);
        scanf("%d", &arr[i].year);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].day);
    }

    sort(arr,n);

    for(i=0;i<n;i++){
        printf("%s\n", arr[i].name);
    }

    return 0;
}