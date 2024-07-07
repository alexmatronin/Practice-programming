#include <stdio.h>
#include <math.h>

int points(int x1, int y1, int r1, int x2, int y2, int r2) {
  
    float AB;  

    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (AB > (r1 + r2) || AB < (r1 - r2) ) {
        return 0; 
    } else if (AB == (r1 + r2) || AB == (r1 - r2)) {
        return 1;
    } else if (AB == 0 && r1 == r2) {
        return -1; 
    } else {
        return 2; 
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2, result;
    
    printf("Введіть координати та радіуси кіл (x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    
    result = points(x1, y1, r1, x2, y2, r2);

    if (result == -1) {
        printf("Точок перетину безкінечно багато\n");
    } else {
        printf("Кількість точок перетину: %d\n", result);
    }

    return 0;
}