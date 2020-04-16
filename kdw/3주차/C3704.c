#include <stdio.h>

int function(int n){
    if(n == 1)return 1;
    else if(n==2)return 2;
    else if(n==3)return 4;
    else return function(n-1) + function(n-2) + function(n-3);
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", function(n));
  return 0;
}
