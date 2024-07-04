#include <stdio.h>

int most_common_multiple(int a, int b) {

    while (b != 0) {
        int value = b;
        b = a % b;
        a = value;
    }
    return a;
}

int least_common_number(int a, int b) {
    int mcm = most_common_multiple(a, b);
    return (a* b) / mcm;
}

int main() {

    int p, result, numbers[p];

    printf("Введіть кількість чисел: \n");
    scanf("%d", &p);

    printf("Введіть числа: \n");
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    } 

    result = numbers[0];

    for (int i = 1; i < p; ++i) {
        result = least_common_number(result, numbers[i]);
    }

    printf("НСК: %d\n", result);

    return 0;
}