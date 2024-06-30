#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int star_f(int m);
int star_s(int n);
int space(int s);

int main() {
	const double pi = 3.1415926;
	int radian = 0;

	for (int i = 0; i < 19; i++) {
		double y = sin(2 * pi / 36 * i);
		int a = y * 20;
		star_f(a);
	}

	for (int k = 19; k < 37; k++) {
		double y_1 = sin(2 * pi / 36 * (k - 18));
		int b = y_1 * 20;

		star_s(b);
	}
}

int star_f(int m) {
	printf("\t\t   ");
	if (m == 0) {
		printf("*\n");
	}
	else {
		for (int i = 1; i <= m; i++) {
			printf("*");
		}
		printf("\n");
	}
}

int star_s(int n) {
	if (n == 0) {
		printf("\t\t   *\n");
	}
	else {
		space(20 - n);
		for (int r = 1; r <= n; r++) {
			printf("*");
		}
		printf("\n");
	}
}

int space(int s) {
	for (int i = 0; i < s; i++) {
		printf(" ");
	}
}