#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	a >= 63 ? printf("연산 결과는 %d", a) : printf("연산결과는 %d입니다", 63 - a);
}