#include <stdio.h>

int digitsum(long long n);
long long leastprimefactor(long long n);
int issmithnumber(long long n);


int main(void) {

	long long n;
	scanf("%lld", &n);
	int sum = issmithnumber(n);
	if(sum !=0) printf("Il numero %lld è uno Smith\n", n);
	else printf("Il numero %lld non è uno Smith \n", n);
	return 0;

}

int digitsum(long long n) {
	int sum =0;
	while(n>0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

long long leastprimefactor(long long n) {
	long long f=2;
	while(f<=n/f && (n%f)!=0) {
		f++;
	}
	return((n%f)==0 ? f:n);
}

int issmithnumber(long long n) {
	if(n<=1 || leastprimefactor(n)==n) // se n è un numero primo, non è uno Smith
	return 0;
	int sumN = digitsum(n);
	int sumF = 0;
	while(n>1)  {
		long long f = leastprimefactor(n);
		sumF += digitsum(f);
		n/=f;
	}
	return (sumF == sumN ? sumF:0);
}
