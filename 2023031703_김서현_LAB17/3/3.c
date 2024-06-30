#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("1에서 1000사이의 랜덤으로 숫자를 생성합니다. 8번의 기회를 드립니다...\n\n");
	int random_num;
	srand(time(NULL));
	random_num = (rand()) % 1000 + 1;
	int predict_num, try=1;

	while (try!=9) {
		printf("%d. 생성된 숫자를 예상해주세요 : ", try);
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
			printf("정답입니당!!!!!!!!%d번의 기회로 맞추셨습니다~~\n\n", try);
			try = 9;
			return 1;
		}
	}
	printf("\n8번의 기회를 모두 사용하셨지만 답을 맞추지 못햇네요...");
	printf("\n답은 바로 %d였습니다.\n\n", random_num);
}