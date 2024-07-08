#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minS(int x, int y) {

    int steps = 0, odds, k = 1;

    odds = y - x;

    while (odds > 0) {
        odds -= k;
        steps++;

    if (steps % 2 == 0) {
        k++;
    }
    }

    return steps;
}

int main() {
    int x, y, steps;

    printf("Enter the value of x: ");

    if (scanf("%d", &x) != 1 || x < 0 || x > INT_MAX) {
        printf("Invalid value of x. X must be in the range 0 <= x <= %d\n", INT_MAX);
        return 1;
    }

    printf("Enter the value of y: ");

    if (scanf("%d", &y) != 1 || y < 0 || y > INT_MAX || y < x) {
        printf("Invalid value of y. Y must be in the range x <= y <= %d\n", INT_MAX);
        return 1;
    }

    steps = minS(x, y);

    printf("The minimum number of steps to transition from %d to %d is: %d\n", x, y, steps);

    return 0;
}