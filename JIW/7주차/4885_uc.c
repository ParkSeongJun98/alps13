#include <stdio.h>
int a, b, a_max, b_max, a_goal, b_goal;
int flag, globalcount=0;
void action(int option, int count){
    if(flag){
        return;
    }
    if((a==a_goal)&&(b==b_goal)){
        flag = count;
        return;
    }
    if(count == 11){
        return;
    }

    switch(option){
        
        case 1:
            a = a_max;
            action(2, count+1);
            action(4, count+1);
            action(5, count+1);
            action(6, count+1);
        break;
        case 2:
            b = b_max;
            action(1, count+1);
            action(3, count+1);
            action(5, count+1);
            action(6, count+1);
        break;
        case 3:
            a = 0;
            action(1, count+1);
            action(2, count+1);
            action(4, count+1);
            action(5, count+1);
            action(6, count+1);
        break;
        case 4:
            b = 0;
            action(1, count+1);
            action(2, count+1);
            action(3, count+1);
            action(5, count+1);
            action(6, count+1);
        break;
        case 5:
            if(b_max - b < a){
                a -= (b_max - b);
                b = b_max;
            }
            else{
                b += a;
                a = 0;
            }
            action(1, count+1);
            action(2, count+1);
            action(3, count+1);
            action(4, count+1);
            action(6, count+1);
        break;
        case 6:
            if(a_max - a < b){
                b -= (a_max - a);
                a = a_max;
            }
            else{
                a += b;
                b = 0;
            }
            action(1, count+1);
            action(2, count+1);
            action(3, count+1);
            action(4, count+1);
            action(5, count+1);
        break;
    }
    printf("a:%d b:%d count:%d global:%d\n", a, b, count, globalcount++);
}
int main(void){
    scanf("%d", &a_max);
    scanf("%d", &b_max);
    scanf("%d", &a_goal);
    scanf("%d", &b_goal);
    flag = 0;
    a = 0;
    b = 0;

    action(1, 0);
    action(2, 0);

    if(flag){
        printf("%d", flag);
    }
    else{
        printf("-1");
    }
    return 0;
}