#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	a >= 63 ? printf("���� ����� %d", a) : printf("�������� %d�Դϴ�", 63 - a);
}