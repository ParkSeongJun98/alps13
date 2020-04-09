//clear!

#include <stdio.h>

struct Student{
    char name[10];
    int score;
};

void sort(struct Student *arr, int n){
    int i, j;
    struct Student temp;
    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].score < arr[j+1].score){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int n, m, i;
    struct Student *arr;
    scanf("%d", &n);
    scanf("%d", &m);

    arr = (struct Studnet*)malloc(sizeof(struct Student)*n);
    for(i=0;i<n;i++){
        scanf("%s", &arr[i].name);
        scanf("%d", &arr[i].score);
    }

    sort(arr, n);
    for(i=0;i<m;i++){
        printf("%s\n", arr[i].name);
    }

    return 0;
}