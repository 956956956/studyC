#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	srand(time(NULL));
	
	int* ary;
	ary = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++) {
		ary[i] = rand() % 100;
	}
	printf("정렬 전 배열 값 : -->\n");
	for (int i = 0; i < 10; i++) {
		printf("%4d", ary[i]);
	}
	printf("\n");

	int temp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (ary[j] > ary[j + 1]) {
				temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
			}
		}
	}
	printf("정렬 후 배열 값 : -->\n");
	for (int k = 0; k < 10; k++) {
		printf("%4d", ary[k]);
	}
}