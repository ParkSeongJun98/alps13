//clear!
#include <stdio.h>

int n;


// 이 부분에 들어가야 될 코드를 작성하여 제출

int zero(int k){
    return !k;
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}