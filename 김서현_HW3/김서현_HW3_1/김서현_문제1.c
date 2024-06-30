#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int num;
	printf("ют╥б : ");
	scanf("%d", &num);
	for (int i = num; i > 0; i--) {
		printf("*");
	}
	printf("\n");


	for (int k = 0; k < num - 2; k++) {
		for (int j = num - 2 - k; j > 0; j--) {
			printf(" ");
		}

		printf("*\n");
	}


	for (int i = num; i > 0; i--) {
		printf("*");
	}
}