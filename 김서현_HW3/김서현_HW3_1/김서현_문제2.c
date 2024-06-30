#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[33];
    int mask = 0xFF;
    int decimal[4] = { 0 };

    printf("이진수 입력: ");
    scanf("%s", a);
    for (int i = 0; i < 32; i += 8) {
        char octet[9];
        strncpy(octet, a + i, 8);
        octet[8] = '\0';
        int b = strtol(octet, NULL, 2) & mask;
        decimal[i / 8] = b;
    }
    printf("변환 결과: %d.%d.%d.%d\n", decimal[0], decimal[1], decimal[2], decimal[3]);

    return 0;
}