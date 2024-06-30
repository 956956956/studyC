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
            printf("%c", a[i]); // 띄어쓰기 또는 특수 문자 출력
            bufferIndex = 0; // 버퍼 초기화
        }
        else {
            buffer[bufferIndex++] = a[i];
        }
    }

    // 마지막 단어 처리
    for (int j = bufferIndex - 1; j >= 0; j--) {
        printf("%c", buffer[j]);
    }

    return 0;
}