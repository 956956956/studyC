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
		printf("������ ������ϴ�.");
		return 1;
	}

	struct Student* head = NULL;

	for (int i = 0; i < 6; i++) {
		struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

		fscanf(fp, "%d %s %f %f", &newStudent->num, newStudent->name, &newStudent->score1, &newStudent->score2);
		newStudent->totalScore = newStudent->score1 + newStudent->score2;

		newStudent->next = NULL; // ���ο� �л��� ���� ��带 NULL�� �ʱ�ȭ

		if (head == NULL) {
			head = newStudent; // ù ��° �л��� ��� head�� ����
		}
		else {
			struct Student* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newStudent; // ������ �л��� ���� ���� ���ο� �л� �߰�
		}
	}

	fclose(fp);

	struct Student* current = head;
	FILE* output = fopen("output.txt", "w"); // ��� ����� ������ ���� ����

	while (current != NULL) {
		// ǥ�� ��°� ���Ͽ� ���ÿ� ���
		printf("%d %s %.1f %.1f %.1f\n", current->num, current->name, current->score1, current->score2, current->totalScore);
		fprintf(output, "%d %s %.1f %.1f %.1f\n", current->num, current->name, current->score1, current->score2, current->totalScore);
		current = current->next;
	}

	fclose(output); // ���� �ݱ�

	current = head;
	while (current != NULL) {
		struct Student* temp = current;
		current = current->next;
		free(temp);
	}

	return 0;
}
