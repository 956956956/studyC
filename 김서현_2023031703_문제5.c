#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	char m;
	printf("���ĺ� �ҹ��ڸ� �Է��ϼ��� : ");
	scanf("%c", &m);
	m >= 97 && m <= 119 ? printf("%c", m + 3) : (m >= 120 && m <= 123 ? printf("%c", m - 23) : printf("���ĺ� �ҹ��ڰ� �ƴմϴ�"));
}