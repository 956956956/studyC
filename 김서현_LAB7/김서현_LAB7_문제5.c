#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double euler(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    double prev_result = 0;
    double result = 1;
    int n = 1;
    while (abs(result - prev_result) >= 0.000001) {
        prev_result = result;
        result = euler(n);
        n++;
    }
    printf("%.6f\n", result);
    return 0;
}