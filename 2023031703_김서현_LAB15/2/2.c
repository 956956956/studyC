#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define PRINT(a,b) printf("a와 b의 곱은 %d입니다.", (a)*(b));

int main() {
	int* a = (int*)malloc(sizeof(int));
	int* b = (int*)malloc(sizeof(int));

	*a = 7;
	*b = 2;

	PRINT(*a, *b);

	free(a);
	free(b);
}