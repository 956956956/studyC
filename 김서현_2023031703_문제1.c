#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int a;
	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�������� %d��\n", a / 50000);
	printf("������ %d��\n", a % 50000 / 10000);
	printf("õ���� %d��\n", a % 10000 / 1000);
	printf("���¥�� %d��\n", a % 1000 / 100);
	printf("�ʿ�¥�� %d��", a % 100 / 10);
}