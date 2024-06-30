#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int user_lotto[6];
	int system_lotto[6];
	int bingo=0;
	int i;
	printf("본인이 원하는 로또 숫자 입력 ( 1에서 45 사이의 정수 6개 )\n");
	for (i = 0; i < 6; i++) {
		scanf("%d", &user_lotto[i]);
		if (user_lotto[i] > 45) {
			printf("1에서 45 사이의 정수를 입력해주세요.");
			return 1;
		}
	}
	srand(time(NULL));
	printf("\n\n로또를 추첨합니다.\n");
	for (i = 0; i < 6; i++) {
		system_lotto[i] = (rand()) % 45 + 1;
		printf("%d  ", system_lotto[i]);
		for (int j = 0; j < 6; j++) {
			if (system_lotto[i] == user_lotto[j]) {
				bingo++;
			}
		}
	}
	printf("\n\n");
	if (bingo == 0 || bingo == 1 || bingo == 2) {
		printf("탈락입니다.");
	}
	else if (bingo == 3) {
		printf("3개 맞았습니다. 4등입니다.");
	}
	else if (bingo == 4) {
		printf("4개 맞았습니다. 3등입니다.");
	}
	else if (bingo == 5) {
		printf("5개 맞았습니다. 2등입니다!!!");
	}
	else if (bingo == 6) {
		printf("6개 맞았습니다. 1등 추카함니당~~");
	}
}