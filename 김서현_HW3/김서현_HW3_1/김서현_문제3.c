#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[101];
	scanf("%s", &a);
	char temp = a[0];
	int count = 1;
	int n;
	for (int j = 0; j < 101; j++) {
		if (a[j] == '\0') {
			n = j;
		}
	}



	for (int i = 1; i <= n; i++) {
		if (a[i] ==temp) {
			count++;
		}
		else{
			printf("%d ", count);
			count = 1;
			temp = a[i];
		}
		
	}
}