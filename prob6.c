

#include <stdio.h>
#include <conio.h>

typedef long long int ll;

int main(){
	ll sum1 = 0, sum2 = 0;
	for(int i = 1; i<101; i++){
		sum1 += i*i;
	}
	for(int j = 1; j<101; j++){
		sum2 += j;
	}
	sum2 *= sum2;
	printf("%lld",sum2-sum1);
	getch();
	return 0;
}
