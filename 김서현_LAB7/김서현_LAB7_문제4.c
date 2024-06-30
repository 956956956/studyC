#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    // 1 ~ 45 ������ ���� 45���� ���� �迭
    int numbers[45];

    // �迭�� 1 ~ 45 ������ ������ ä���
    for (int i = 0; i < 45; i++) {
        numbers[i] = i + 1;
    }

    // �ߺ����� �ʴ� 6���� �ζǹ�ȣ�� ������ ����
    int winner[6];

    // �ߺ����� �ʴ� 6���� �ζǹ�ȣ�� �����ϴ� �Լ�
    void generate_winner(int* winner) {
        // 6���� �ζǹ�ȣ�� ������ ����
        int i, j;

        // �ζǹ�ȣ�� �ߺ����� �ʰ� �����ϱ� ����
        // �̹� ���õ� �ζǹ�ȣ�� ������ �迭
        int selected[45] = { 0 };

        // 6���� �ζǹ�ȣ�� �����ϱ�
        for (i = 0; i < 6; i++) {
            // 1 ~ 45 ������ ������ ������ ����
            int number = rand() % 45 + 1;

            // �̹� ���õ� �ζǹ�ȣ���� Ȯ��
            for (j = 0; j < i; j++) {
                if (number == winner[j]) {
                    break;
                }
            }

            // �̹� ���õ��� ���� �ζǹ�ȣ���
            if (j == i) {
                winner[i] = number;
                selected[number - 1] = 1;
            }
        }
    }

    // �ߺ����� �ʴ� 6���� �ζǹ�ȣ�� ���
    generate_winner(winner);
    for (int i = 0; i < 6; i++) {
        printf("%d ", winner[i]);
    }
    printf("\n");

    return 0;
}
