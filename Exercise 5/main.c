#include <stdio.h>

#define MOD 12345

int countS(int n) {
    if (n == 1) {
        return 2; 
    }
    else if (n == 2) {
        return 4; 
    }
    else if (n == 3) {
        return 7;
    }

    int value1 = 2, value2 = 4, value3 = 7;
    int current;

    for (int i = 4; i <= n; i++) {
        current = (value1 + value2 + value3) % MOD;
        value1 = value2;
        value2 = value3;
        value3 = current;
    }

    return value3;
}

int main() {
    int n, result;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    if(n < 1 || n > 10000) {
        printf("Invalid value");
        return 1;
    }

    result = countS(n);

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
} 