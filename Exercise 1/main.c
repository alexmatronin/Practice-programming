#include <stdio.h> 

int main () {
    float t1, t2, t3, total_productiivity, total_time; 

    printf("Введіть три значення: \n");
    scanf("%f %f %f", &t1, &t2, &t3);
    
    total_productiivity = 1.0/t1 + 1.0/t2 + 1.0/t3;

    total_time = 1.0/total_productiivity;

    printf("Час необхідний для з'їдання пирога: %.2f", total_time);

   return 0;
}