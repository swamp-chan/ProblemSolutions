

#include <stdio.h>
#include <conio.h>

typedef long long int ll;

int main(){
	ll sum1 = 0, sum2 = 0;
	int n = 100;
	sum1 = n*(n+1)/2;
	sum2 = n*(n+1)*(2*n+1)/6;
	printf("%lld",sum1*sum1-sum2);
	getch();
	return 0;
}
