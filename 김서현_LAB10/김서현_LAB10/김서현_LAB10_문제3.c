#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    char a[41];
    gets(a);

    char buffer[41];
    int bufferIndex = 0;

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ' || a[i] == '!' || a[i] == '?' || a[i] == ',' || a[i] == '.') {
            for (int j = bufferIndex - 1; j >= 0; j--) {
                printf("%c", buffer[j]);
            }
            printf("%c", a[i]); // ���� �Ǵ� Ư�� ���� ���
            bufferIndex = 0; // ���� �ʱ�ȭ
        }
        else {
            buffer[bufferIndex++] = a[i];
        }
    }

    // ������ �ܾ� ó��
    for (int j = bufferIndex - 1; j >= 0; j--) {
        printf("%c", buffer[j]);
    }

    return 0;
}