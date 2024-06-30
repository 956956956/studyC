#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	char m;
	printf("알파벳 소문자를 입력하세요 : ");
	scanf("%c", &m);
	m >= 97 && m <= 119 ? printf("%c", m + 3) : (m >= 120 && m <= 123 ? printf("%c", m - 23) : printf("알파벳 소문자가 아닙니다"));
}