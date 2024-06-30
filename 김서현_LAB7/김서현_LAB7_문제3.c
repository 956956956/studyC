#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int *plus(int x[3][3], int y[3][3]);
int minus(int x[3][3], int y[3][3]);
int time(int x[3][3], int y[3][3]);

int main() {
	int a[3][3], b[3][3], c[3][3];
	printf("첫 번째 행렬 입력 : \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n두 번째 행렬 입력 : \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	printf("\n행렬의 합 :\n");
	printf("%d ", plus(a, b));


	printf("\n행렬의 차 :\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] - b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	printf("\n행렬의 곱 :\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

int *plus(int x[][3], int y[][3]) {
	int z[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			z[i][j] = x[i][j] + y[i][j];
		}
	}
	return z;
}