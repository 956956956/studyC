#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    // 1 ~ 45 사이의 정수 45개를 담을 배열
    int numbers[45];

    // 배열에 1 ~ 45 사이의 정수를 채우기
    for (int i = 0; i < 45; i++) {
        numbers[i] = i + 1;
    }

    // 중복되지 않는 6개의 로또번호를 생성할 변수
    int winner[6];

    // 중복되지 않는 6개의 로또번호를 생성하는 함수
    void generate_winner(int* winner) {
        // 6개의 로또번호를 생성할 변수
        int i, j;

        // 로또번호를 중복되지 않게 생성하기 위해
        // 이미 선택된 로또번호를 저장할 배열
        int selected[45] = { 0 };

        // 6개의 로또번호를 생성하기
        for (i = 0; i < 6; i++) {
            // 1 ~ 45 사이의 임의의 정수를 생성
            int number = rand() % 45 + 1;

            // 이미 선택된 로또번호인지 확인
            for (j = 0; j < i; j++) {
                if (number == winner[j]) {
                    break;
                }
            }

            // 이미 선택되지 않은 로또번호라면
            if (j == i) {
                winner[i] = number;
                selected[number - 1] = 1;
            }
        }
    }

    // 중복되지 않는 6개의 로또번호를 출력
    generate_winner(winner);
    for (int i = 0; i < 6; i++) {
        printf("%d ", winner[i]);
    }
    printf("\n");

    return 0;
}
