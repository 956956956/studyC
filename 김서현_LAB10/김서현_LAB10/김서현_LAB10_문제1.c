#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float plus(float a, float b) {
	float sum;
	sum = a + b;
	return sum;
}

float minus(float a, float b) {
	float m;
	m = a - b;
	return m;
}

float times(float a, float b) {
	float t;
	t = a * b;
	return t;
}

float divide(float a, float b) {
	float d;
	d = a / b;
	return d;
}

int main() {
	float(*cal[])(float, float) = { plus, minus, times, divide };
	float a, b;
	printf("�� ���� ���ڸ� �Է��ϼ���.(�Ǽ������� ���̿� ������ �ΰ� �Է�) : \n");
	scanf("%f %f", &a, &b);
	printf("%.3f + %.3f = %.3f\n", a, b, cal[0](a, b));
	printf("%.3f - %.3f = %.3f\n", a, b, cal[1](a, b));
	printf("%.3f * %.3f = %.3f\n", a, b, cal[2](a, b));
	printf("%.3f / %.3f = %.3f\n", a, b, cal[3](a, b));
}