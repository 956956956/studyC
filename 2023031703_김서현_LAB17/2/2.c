#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int user_lotto[6];
	int system_lotto[6];
	int bingo=0;
	int i;
	printf("������ ���ϴ� �ζ� ���� �Է� ( 1���� 45 ������ ���� 6�� )\n");
	for (i = 0; i < 6; i++) {
		scanf("%d", &user_lotto[i]);
		if (user_lotto[i] > 45) {
			printf("1���� 45 ������ ������ �Է����ּ���.");
			return 1;
		}
	}
	srand(time(NULL));
	printf("\n\n�ζǸ� ��÷�մϴ�.\n");
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
		printf("Ż���Դϴ�.");
	}
	else if (bingo == 3) {
		printf("3�� �¾ҽ��ϴ�. 4���Դϴ�.");
	}
	else if (bingo == 4) {
		printf("4�� �¾ҽ��ϴ�. 3���Դϴ�.");
	}
	else if (bingo == 5) {
		printf("5�� �¾ҽ��ϴ�. 2���Դϴ�!!!");
	}
	else if (bingo == 6) {
		printf("6�� �¾ҽ��ϴ�. 1�� ��ī�Դϴ�~~");
	}
}