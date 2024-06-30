#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[10], t;
	printf("입력 : ");
	for (int i; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 9; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("정렬 결과 : ");
	for(int k = 0; k < 10; k++) {
		printf("%d ", a[k]);
	}
}