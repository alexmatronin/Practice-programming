#include <stdio.h>

int pNumbers(int p) {
    int a = 2, b = 0, value;
    for (int n = 2; n <= p; ++n) {
        value = a;
        a = a + b; 
        b = value;
    }
    return a + b;
}

int main() {
    int p, result;
    printf("Введіть значення p: ");
    scanf("%d", &p);

    if (p > 30) {
        printf("Invalid value\n");
        return 1;
    }

    result = pNumbers(p);

    printf("Кількість чисел з %d розряду: %d\n", p, result);
    return 0;
}