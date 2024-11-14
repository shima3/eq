#include <stdio.h>

void f(int n, int a[]){
  int min=a[0];
  int max=a[0];
  int sum=a[0];
  int i=1;
  while(i<n){
    if(min>a[i])
      max=a[i];
    if(max<a[i])
      max=a[i];
    sum=sum+a[i];
    i=i+1;
  }
  printf("min=%d\n", min);
  printf("max=%d\n", max);
  printf("sum=%d\n", sum);
}

int main(void){
  int n, i, a[100];
  printf("n? ");
  scanf("%d", &n);
  for(i=0; i<n; ++i){
    printf("a[%d]? ", i);
    scanf("%d", &a[i]);
  }
  f(n, a);
  return 0;
}
