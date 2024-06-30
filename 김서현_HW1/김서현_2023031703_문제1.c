#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int a;
	printf("금액을 입력하세요 : ");
	scanf("%d", &a);
	printf("오만원권 %d장", a / 50000);
	printf("만원권 %d장", a % 50000 / 10000);
	printf("천원권 %d장", a % 10000 / 1000);
	printf("백원짜리 %d개", a % 1000 / 100);
	printf("십원짜리 %d개", a % 100 / 10);
}