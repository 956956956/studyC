#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




int main() {
	char* student[] = { {"학생1"},{"학생2"},{"학생3"},{"학생4"},{"학생5"} };
	char* number[] = { {"1111"},{"2222"},{"3333"},{"4444"},{"5555"} };

	char* student_a[] = { 0 };
	char* number_a[] = { 0 };


	char name[150];
	printf("학생 이름을 입력하세요 : \n(*입력 예시 : 학생1)\n\n");
	gets(name);

	for (int i = 0; name[i] != '\0'; i++) {
		if (name[i] == '\n') {
			name[i] = '\0';
			break;
		}
	}

	int found = 0;

	for (int i = 0; i < 5; i++) {
		if (strcmp(student[i], name) == 0) {
			printf("학번 : %s\n", number[i]);
			found = 1;
			break;
		}
	}

	if (found != 1) {
		printf("일치하는 학생이 없습니다.");
	}
}