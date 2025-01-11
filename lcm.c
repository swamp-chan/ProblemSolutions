//problem 5 of project euler
//lcm of numbers 1 - 20

#include <stdio.h>
#include <conio.h>

typedef long long int ll;
ll LCM(ll a, ll b);
ll HCF(ll a, ll b);
int main(){
	ll e=1;
	for(int i = 1; i<=20; i++){
	   e = LCM(e,i);
	}
	printf("%lld",e);
        getch();
	return 0;
}
ll HCF(ll a, ll b){
	ll c;
	while(b!=0){
	 c = b;
	 b = a%b;
	 a = c;
	}
	return a;
}

ll LCM(ll a, ll b){
	return (a*b)/HCF(a,b);
}
