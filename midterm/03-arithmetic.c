#include <stdio.h>
 
int main() {
    double a, b;
    scanf("%lf,%lf", &a, &b);
 
    double plus = a + b;
    double minus = a - b;
    double multiply = a * b;
    double divide = a / b;
 
    printf("The sum of the given numbers : %.6lf\n", plus);
    printf("The difference of the given numbers : %.6lf\n", minus);
    printf("The product of the given numbers : %.6lf\n", multiply);
    printf("The quotient of the given numbers : %.6lf", divide);
 
    return 0;
}