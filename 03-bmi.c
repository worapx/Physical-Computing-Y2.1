#include <stdio.h>
#include <math.h>
 
int main() {
    float height, weight;
    scanf("%f", &height);
    scanf("%f", &weight);
 
    float bmi = weight/((height/100)*(height/100));
    printf("%.6f", bmi);
 
    return 0;
}