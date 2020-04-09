#include <stdio.h>

char seoul[1001];
char daegu[1001];
int size_a, size_b, max;

void subsequence(int a, int b, int count){
    int i;
    char temp = daegu[b];
    //b가 문자열 끝이면 return
    if(b == size_b)
        return;
    
    subsequence(a, b+1, count);
    //index b를 가지고 a부터 검사
    for(i = a;i<size_a;i++){
        if(seoul[i] == temp){
            break;
        }
    }
    if(i < size_a){
        count++;
        if(max < count){
            max = count;
        }
        subsequence(i+1, b+1, count);
    }

}
int main(void){
    int i;
    scanf("%s", seoul);
    scanf("%s", daegu);

    for(i=0;i<1001;i++){
        if(seoul[i] == 0){
            size_a = i;
            break;
        }
    }

    for(i=0;i<1001;i++){
        if(daegu[i] == 0){
            size_b = i;
            break;
        }
    }
    max = 0;
    subsequence(0,0,0);

    printf("%d", max);
    return 0;
}