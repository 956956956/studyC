#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void isPrime(int* arr, int* primecnt, int* primearr) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] <= 1) break;
        int is_prime = 1;
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                is_prime = 0;
                primearr[i] = 0;
                break;
            }
        }
        if (is_prime) {
            (*primecnt)++;
            primearr[i] = 1;
        }
    }
}

void primenumber(int* arr, int size, int* sortarr, int* primearr, int* primecnt) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = (rand()) % 20 + 1;
        sortarr[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sortarr[j] > sortarr[j + 1]) {
                int temp = sortarr[j];
                sortarr[j] = sortarr[j + 1];
                sortarr[j + 1] = temp;
            }
        }
    }

    isPrime(sortarr, primecnt, primearr);
}

int main() {
    int system_random[5];
    int prime_arr[5];
    int prime_count = 0;
    int sort_arr[5];

    primenumber(system_random, 5, sort_arr, prime_arr, &prime_count);

    printf("���� 5��(1~20) : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", system_random[i]);
    }

    printf("\n�������� ���� : ");
    for (int h = 0; h < 5; h++) {
        printf("%d ", sort_arr[h]);
    }

    printf("\n\n");

    for (int k = 0; k < 5; k++) {
        if (prime_arr[k] == 0) {
            printf("%d = ����\n", sort_arr[k]);
        }
        else if (prime_arr[k] == 1) {
            printf("%d = �Ҽ�\n", sort_arr[k]);
        }
    }

    printf("\n\n�Ҽ��� ");
    for (int j = 0; j < 5; j++) {
        if (prime_arr[j] == 0) {
            continue;
        }
        else if (prime_arr[j] == 1) {
            printf("%d ", sort_arr[j]);
        }
    }

    printf("�� �� %d�� �Դϴ�.", prime_count);

    return 0;
}
