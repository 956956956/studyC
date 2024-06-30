#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("숫자를 하나 입력하세요 :\n");
	scanf("%d", &size);
	int** list = (int**)malloc(size * sizeof(int*));

	for (int i = 0; i < size; i++) {
		list[i] = (int*)malloc(size * sizeof(int));

	}

	int num = 1;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			list[i][j] = num;
			printf("%5d", list[i][j]);
			num++;
		}
		printf("\n");
	}

	for (int k = 0; k < size; k++) {
		free(list[k]);
	}
	free(list);
}