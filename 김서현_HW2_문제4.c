#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long int a, b, c, d;
	printf("�Է� : ");
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		c = a - b;
		d = a + b;
	}
	else {
		c = b - a;
		d = a + b;
	}
	printf("�� : %lld\n�� : %lld", d, c);
}