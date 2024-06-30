#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void frqtest(int x[]);

int main() {
	int x[20];
	printf("0부터 9까지의 정수를 입력하시오.\n");
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
	printf("0~9중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.", index, frq[index]);
}