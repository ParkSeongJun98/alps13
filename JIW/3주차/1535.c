//clear!
#include <stdio.h>

int n, d[110];

int f(void){
    int max, index, i;
    max = d[0];
    index = 0;

    for(i=1;i<n;i++){
        if(d[i]>max){
            index = i;
            max = d[i];
        }
    }

    return index+1;
}

int main() {
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}