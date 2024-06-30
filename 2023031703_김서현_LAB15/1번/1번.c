#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ary;
	ary = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 9; i++) {
		ary[i] = rand() % 100;
	}
	printf("정렬 전 배열 값 : -->\n");
	for (int i = 0; i < 9; i++) {
		printf("%d   ", ary[i]);
	}
	printf("\n");

	int temp = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (ary[j] > ary[j + 1]) {
				temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = ary[j + 1];
			}
		}
	}

	for (int k = 0; k < 9; k++) {
		printf("%d  ", ary[k]);
	}

	free(ary);
}