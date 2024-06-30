#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_s[5][6];
    char output_s[5][5];
    int garo, sero;

    for (int i = 0; i < 5; i++) {
        gets(input_s[i]);
    }
    int ga[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int se[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    for (sero = 0; sero < 5; sero++) {
        for (garo = 0; garo < 5; garo++) {
            if (input_s[sero][garo] == 'x') {
                output_s[sero][garo] = 'x';
            }
            else {
                int count = 0;
                for (int i = 0; i < 8; i++) {
                    int g = garo + ga[i];
                    int s = sero + se[i];
                    if (g >= 0 && g < 5 && s >= 0 && s < 5 && input_s[s][g] == 'x') {
                        count++;
                    }
                }
                if (count == 0) {
                    output_s[sero][garo] = ' ';
                }
                else {
                    output_s[sero][garo] = '0' + count;
                }
            }
        }
    }
    for (sero = 0; sero < 5; sero++) {
        for (garo = 0; garo < 5; garo++) {
            printf("%c", output_s[sero][garo]);
        }
        printf("\n");
    }
}
