#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool ispalin(int n);

int main(){
 int i;
 int j;
 int product;
 int max = 0;
 for(int i = 100; i<=999; i++){
   for (int j = i; j>=100; j--){
     product = i*j;
     if(ispalin(product) && product>max){
       max = product;
     }
   }
 }
 printf("%d",max);
 getch();
 return 0;
}

bool ispalin(int n){
 int c = n,r,f = 0;
 while(n!=0){
  r = n%10;
  f = f*10+r;
  n = n/10;
 }
 if(f == c){
  return true;
 }else{
  return false;
 }
}
