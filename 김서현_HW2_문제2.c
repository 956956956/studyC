#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void frqtest(int x[]);

int main() {
	int x[20];
	printf("0���� 9������ ������ �Է��Ͻÿ�.\n");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &x[i]);
	}
	frqtest(x);
}

void frqtest(int x[]) {
	int frq[10] = { 0 };
	int index, max = 0;

	for (int i = 0; i < 20; i++) {
		frq[x[i]]++;
	}
	for (int j = 0; j < 10; j++) {
		if (frq[j] > max) {
			max = frq[j];
			index = j;
		}

	}
	printf("0~9�� ���� ���� ���� ���� %d�̰�, %d�� ���Խ��ϴ�.", index, frq[index]);
}