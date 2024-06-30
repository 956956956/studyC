#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long int a, b, c, d;
	printf("입력 : ");
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		c = a - b;
		d = a + b;
	}
	else {
		c = b - a;
		d = a + b;
	}
	printf("합 : %lld\n차 : %lld", d, c);
}