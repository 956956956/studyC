#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main() {
	int m;
	printf("�ݿø� �� �Ҽ��� �Է��ϼ��� : ");
	scanf("%d", &m);
	(m%1>=0.5 ? printf("�ݿø��ϸ� ���� �ڸ� ���ڰ� Ŀ���ϴ�.") : printf("�ݿø� �ص� ���� �ڸ� ���ڴ� �״�� �Դϴ�."));
}