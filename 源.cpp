素数是正数，可以被两个不同的整数整除。 数字素数是素数，数字的总和也是素数。 例如，素数41是数字素数因为4 1 = 5而5是素数。 17不是数字素数因为1 7 = 8，而8不是素数。 在这个问题中，你的工作是找到一个小于1000000的特定范围内的数字素数。
输入文件的第一行包含一个整数N（0 <N <= 500000），表示输入的总数。 接下来的N行中的每一行包含两个整数t1和t2（0 <t1 <= t2 <1000000）。
对于除第一行之外的每行输入，生成一行输出，其包含表示t1和t2（包括）之间的素数的整数。
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
