#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




int main() {
	char* student[] = { {"�л�1"},{"�л�2"},{"�л�3"},{"�л�4"},{"�л�5"} };
	char* number[] = { {"1111"},{"2222"},{"3333"},{"4444"},{"5555"} };

	char* student_a[] = { 0 };
	char* number_a[] = { 0 };


	char name[150];
	printf("�л� �̸��� �Է��ϼ��� : \n(*�Է� ���� : �л�1)\n\n");
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
			printf("�й� : %s\n", number[i]);
			found = 1;
			break;
		}
	}

	if (found != 1) {
		printf("��ġ�ϴ� �л��� �����ϴ�.");
	}
}