#include <stdio.h>
int main() {
    float age, h, w;
    float summ_age = 0.0, summ_h = 0.0, summ_w = 0.0;
    int o1 = 0, o2 = 0, o3 = 0, o4 = 0, o5 = 0;
 
    int i = 1;
    while (i <= 50) {
        scanf("%f %f %f",&age, &h, &w);
        if (age >= 20 && h >= 160) {
            o1++;
        }
        else if (age < 20 && (h <= 180 || w >= 60)) {
            o2++;
        }
 
        if (age >= 30 && w >= 40 && w <= 80) {
            o3++;
        }
        if (age < 40 && (w < 85 || h <= 200)) {
            o4++;
        }
        summ_age += age;
        summ_h += h;
        summ_w += w;
        i++;
    }
 
    float avg_age = summ_age / 50;
    float avg_h = summ_h / 50;
    float avg_w = summ_w / 50;
 
    printf("Age >= 20 and Height >= 160: %d\n", o1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", o2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", o3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", o4);
    printf("Average Age: %.0f\n", avg_age);
    printf("Average Height: %.2f\n", avg_h);
    printf("Average Weight: %.2f", avg_w);
     
    return 0;
}