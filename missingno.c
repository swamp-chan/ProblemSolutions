#include <stdio.h>
#include <conio.h>

int summ(int a);
int main(){
  int n,sum1 = 0,sum2 = 0;
  scanf("%d",&n);
  int a[n-1];
  for(int i = 0; i<n-1; i++){
     scanf("%d",&a[i]);	  
  }
  for(int i = 1; i<=n; i++){
     sum1 += i;		
  }
  for(int i = 0; i<n-1; i++){
    sum2 += a[i];
  }
  printf("%d",sum1-sum2);
  getch();
  return 0;
}

