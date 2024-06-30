#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int computer, user= 0;

	while (user != 3) {
		printf("가위 (0) / 바위 (1) / 보 (2) / 종료 (3) 중에서 하나 입력 => ");
		scanf("%d", &user);
		srand(time(NULL));
		computer = (rand()) % 2;
		if (computer == 0) {
			if (user == 0) {
				printf("당신은 가위이고, 시스템은 가위입니다.\n비겼습니다.\n");
			}
			if (user == 1) {
				printf("당신은 바위이고, 시스템은 가위입니다.\n당신의 승리입니다.\n");
			}
			if (user == 2) {
				printf("당신은 보이고, 시스템은 가위입니다.\n시스템의 승리입니다.\n");
			}
		}
		if (computer == 1) {
			if (user == 0) {
				printf("당신은 가위이고, 시스템은 바위입니다.\n시스템의 승리입니다.\n");
			}
			if (user == 1) {
				printf("당신은 바위이고, 시스템은 바위입니다.\n비겼습니다.\n");
			}
			if (user == 2) {
				printf("당신은 보이고, 시스템은 바위입니다.\n당신의 승리입니다.\n");
			}
		}
		if (computer == 2) {
			if (user == 0) {
				printf("당신은 가위이고, 시스템은 보입니다.\n당신의 승리입니다.\n");
			}
			if (user == 1) {
				printf("당신은 바위이고, 시스템은 보입니다.\n시스템의 승리입니다.\n");
			}
			if (user == 2) {
				printf("당신은 보이고, 시스템은 보입니다.\n비겼습니다.\n");
			}
		}

	}
}