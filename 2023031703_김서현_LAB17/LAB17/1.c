#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int computer, user= 0;

	while (user != 3) {
		printf("���� (0) / ���� (1) / �� (2) / ���� (3) �߿��� �ϳ� �Է� => ");
		scanf("%d", &user);
		srand(time(NULL));
		computer = (rand()) % 2;
		if (computer == 0) {
			if (user == 0) {
				printf("����� �����̰�, �ý����� �����Դϴ�.\n�����ϴ�.\n");
			}
			if (user == 1) {
				printf("����� �����̰�, �ý����� �����Դϴ�.\n����� �¸��Դϴ�.\n");
			}
			if (user == 2) {
				printf("����� ���̰�, �ý����� �����Դϴ�.\n�ý����� �¸��Դϴ�.\n");
			}
		}
		if (computer == 1) {
			if (user == 0) {
				printf("����� �����̰�, �ý����� �����Դϴ�.\n�ý����� �¸��Դϴ�.\n");
			}
			if (user == 1) {
				printf("����� �����̰�, �ý����� �����Դϴ�.\n�����ϴ�.\n");
			}
			if (user == 2) {
				printf("����� ���̰�, �ý����� �����Դϴ�.\n����� �¸��Դϴ�.\n");
			}
		}
		if (computer == 2) {
			if (user == 0) {
				printf("����� �����̰�, �ý����� ���Դϴ�.\n����� �¸��Դϴ�.\n");
			}
			if (user == 1) {
				printf("����� �����̰�, �ý����� ���Դϴ�.\n�ý����� �¸��Դϴ�.\n");
			}
			if (user == 2) {
				printf("����� ���̰�, �ý����� ���Դϴ�.\n�����ϴ�.\n");
			}
		}

	}
}