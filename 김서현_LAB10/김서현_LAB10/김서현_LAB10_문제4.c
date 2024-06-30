#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char a[100000];
	int shift = 3;
	gets(a);


	for (int i = 0; a[i] != '\0'; i++) {
		char c = a[i];

		if (c >= 'a' && c <= 'z') {
			c = 'a' + (c - 'a' + shift) % 26;
			printf("%c", c);
		}
		else if (c >= 'A' && c <= 'Z') {
			c = 'A' + (c - 'A' + shift) % 26;
			printf("%c", c);
		}
		else if (c >= '0' && c <= '9') {
			c = '0' + (c - '0' + shift) % 10;
			printf("%c", c);
		}

		else {
			putchar(c);
		}


	}
}