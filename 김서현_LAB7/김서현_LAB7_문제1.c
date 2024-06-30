#define CRT_SECURE_NO_WARNINGS

int swap(int x, int y)

#include <stdio.h>

int main() {
	int a, b;
	printf("입력 : ");
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("swap 결과 : %d %d", a, b);
}
int swap(int x,int y){

	int temp;
	x = temp;
	x = y;
	y = temp;
}
