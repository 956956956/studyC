#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(char* array, int n)
{
    if (n > 1)
    {
        int i;
        for (i = 0; i < n - 1; i++)
        {
            int j = i + rand() / (RAND_MAX / (n - i) + 1);
            char t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

int main()
{
    char alphabet[26];
    for (int i = 0; i < 26; ++i)
    {
        alphabet[i] = 'a' + i;
    }

    srand(time(NULL));

    shuffle(alphabet, 26);

    for (int i = 0; i < 26; ++i)
    {
        printf("%c ", alphabet[i]);
    }

    return 0;
}