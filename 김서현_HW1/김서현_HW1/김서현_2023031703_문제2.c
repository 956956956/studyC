#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int a,b,c,d,e,f,m;
	printf("정수를 입력하세요 : ");
	scanf("%d", &m);
	a = m / 100000;
	b = m % 100000 / 10000;
	c = m % 10000 / 1000;
	d = m % 1000 / 100;
	e = m % 100 / 10;
	f = m % 10;
	printf("%d%d%d%d%d%d", f, e, d, c, b, a);
}