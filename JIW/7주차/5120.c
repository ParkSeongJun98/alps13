#include <stdio.h>

int main(void){
    int day, i, max;
    int *a, *b;
    int acount, min;
    scanf("%d", &day);
    
    a = (int *)malloc(sizeof(int) *day);
    b = (int *)malloc(sizeof(int) *day);    
    
    for(i=0;i<day;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<day;i++){
        scanf("%d", &b[i]);
    }   
    max = 0;
    acount = 0;
    for(i=0;i<day;i++){
        if(a[i] > b[i]){
            max += a[i];
            acount++;
        }
        else{ 
            max += b[i];
        }
    }
    if(acount == day){
        min = a[0] - b[0];
        for(i=1 ; i<day ; i++){
            if(min > (a[i] - b[i])){
                min = (a[i] - b[i]);
            }
        }
        max -= min;
    }
    else if(acount == 0){
        min = b[0] - a[0];
        for(i=1 ; i<day ; i++){
            if(min > (b[i] - a[i])){
                min = (b[i] - a[i]);
            }
        }
        max -= min;
    }
    printf("%d", max);
    return 0;
}