#include <stdio.h> 

int main () {

    int n, remain, division, count = 0;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if(n < 1 || n > 150) {
        printf("Invalid value. Try again");
        return 1;
    }

    for(int m = 1; m < n; m++) {
        division = n / m;
    remain = n % m;

    if (remain == division) {
        count++;
    }
    }
    
    printf("Кількість рівних дільників числа %d: %d", n, count);

    return 0;
}