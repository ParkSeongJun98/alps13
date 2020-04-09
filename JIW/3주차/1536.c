//clear!
#include <stdio.h>

int n;

long long int d[110];

// 이 부분에 들어가야 될 코드를 작성하여 제출
long long int f(void){
    long long int min;
    int i;

    min = d[1];
    for(i=2;i<=n;i++){
        if(d[i]<min)
            min = d[i];
    }

    return min;
}
int main() {
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%lld", &d[i]);

    printf("%lld", f());
    return 0;
}