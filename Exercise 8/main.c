#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    char word[15];
    int length, anagrams = 1, count;

    printf("Введіть слово: ");
    scanf("%14s", word); 

    length = strlen(word);

    anagrams = factorial(length); 

    for (char c = 'A'; c <= 'Z'; c++) {

    count = 0;

    for (int i = 0; i < length; i++) {
        if (toupper(word[i]) == c) {
            count++;
        }
    }

    if (count > 1) {
        anagrams /= factorial(count);
    }
    }

    printf("Кількість анаграм: %d\n", anagrams);

    return 0;
}