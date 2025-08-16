#include <stdio.h>
int main() {
    int safety, round, safety_car;
    float distance;
    int not_allow = 0;
 
    scanf("%d", &safety);
    scanf("%f", &distance);
    scanf("%d", &round);
    scanf("%d", &safety_car);
 
    if (safety == 0) {
        not_allow++;
    }
 
    if (round <= 2) {
        not_allow++;
    }
 
    if ((round - safety_car) < 2) {
        not_allow++;
    }
 
    if (distance >= 1) {
        not_allow++;
    }
 
    if (not_allow > 0) {
        printf("DRS not allowed %d", not_allow);
    }
    else {
        printf("DRS allowed");
    }
 
    return 0;
}