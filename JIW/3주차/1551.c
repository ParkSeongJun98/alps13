#include <stdio.h>

//clear!

int n, d[100010], k;



// 이 부분에 들어가야 될 코드를 작성하여 제출
int f(int k){
    int i;
    int output = -1;
    for(i=1;i<=n;i++){
        if(d[i] == k){
            output = i;
            break;
        }
    }
    return output;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}