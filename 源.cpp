#include<stdio.h>
int isPrime(int x);
int sum(int x);
int isDigitPrime(int x);
int main() {
	int N;
	scanf_s("%d", &N);
	int t1, t2;
	while (N--) {
		scanf_s("%d %d",&t1,&t2);
		int num = 0;
		for (int i = t1; i <= t2; i++) {
			if (isDigitPrime(i))  num++;
		}
		printf_s("%d\n",num);
	}
	getchar();
	getchar();
	return 0;
}
int isPrime(int x) {
	if (x == 1) return 0;
	int i;
	for ( i = 2; i <= x; i++) {
		if (x%i == 0) break;
	}
	if (i == x) return 1;
	else return 0;
}
int sum(int x) {
	int s=0;
	while (x != 0) {
		s = s + x % 10;
		x = x / 10;
	}
	return s;
}
int isDigitPrime(int x) {
	if (isPrime(x)&&isPrime(sum(x))) return 1;
	else return 0;
}