#include <stdio.h>
 
int main() {
    double wide, longg;
    scanf("%lf", &wide);
    scanf("%lf", &longg);

    double perimeter = (wide*2) + (longg*2);
    printf("Perimeter of rectangle = %.4lf units", perimeter);
 
    return 0;
}