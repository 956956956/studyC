#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int m;
	printf("반올림 할 소수를 입력하세요 : ");
	scanf("%d", &m);
	(m%1>=0.5 ? printf("반올림하면 일의 자리 숫자가 커집니다.") : printf("반올림 해도 일의 자리 숫자는 그대로 입니다."));
}