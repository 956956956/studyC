#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("1���� 1000������ �������� ���ڸ� �����մϴ�. 8���� ��ȸ�� �帳�ϴ�...\n\n");
	int random_num;
	srand(time(NULL));
	random_num = (rand()) % 1000 + 1;
	int predict_num, try=1;

	while (try!=9) {
		printf("%d. ������ ���ڸ� �������ּ��� : ", try);
		scanf("%d", &predict_num);
		if (random_num > predict_num) {
			printf("UP\n");
			try++;
		}
		else if (random_num < predict_num){
			printf("DOWN\n");
			try++;
		}
		else if (random_num == predict_num) {
			printf("�����Դϴ�!!!!!!!!%d���� ��ȸ�� ���߼̽��ϴ�~~\n\n", try);
			try = 9;
			return 1;
		}
	}
	printf("\n8���� ��ȸ�� ��� ����ϼ����� ���� ������ ���޳׿�...");
	printf("\n���� �ٷ� %d�����ϴ�.\n\n", random_num);
}