#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	int num;
	char name[20];
	float score1;
	float score2;
	float totalScore;
	struct Student* next;
};

int main() {
	FILE* fp = fopen("Students.txt", "r");

	if (fp == NULL) {
		printf("파일이 비었습니다.");
		return 1;
	}

	struct Student* head = NULL;

	for (int i = 0; i < 6; i++) {
		struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

		fscanf(fp, "%d %s %f %f", &newStudent->num, newStudent->name, &newStudent->score1, &newStudent->score2);
		newStudent->totalScore = newStudent->score1 + newStudent->score2;

		newStudent->next = NULL; // 새로운 학생의 다음 노드를 NULL로 초기화

		if (head == NULL) {
			head = newStudent; // 첫 번째 학생일 경우 head로 지정
		}
		else {
			struct Student* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newStudent; // 마지막 학생의 다음 노드로 새로운 학생 추가
		}
	}

	fclose(fp);

	struct Student* current = head;
	FILE* output = fopen("output.txt", "w"); // 출력 결과를 저장할 파일 생성

	while (current != NULL) {
		// 표준 출력과 파일에 동시에 출력
		printf("%d %s %.1f %.1f %.1f\n", current->num, current->name, current->score1, current->score2, current->totalScore);
		fprintf(output, "%d %s %.1f %.1f %.1f\n", current->num, current->name, current->score1, current->score2, current->totalScore);
		current = current->next;
	}

	fclose(output); // 파일 닫기

	current = head;
	while (current != NULL) {
		struct Student* temp = current;
		current = current->next;
		free(temp);
	}

	return 0;
}
