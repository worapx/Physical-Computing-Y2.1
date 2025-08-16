#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c); //sen rob roob
double area(double b, double h); //area

int main() {
    double a,b;
    scanf("%lf %lf", &a, &b);
    double c = sqrt(pow(a, 2) + pow(b, 2));

    double prmt, result_area;
    prmt = perimeter(a, b, c);
    result_area = area(b, a);
    printf("Perimeter: %.2lf\n", prmt);
    printf("Area: %.2lf", result_area);
    return 0;
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double b, double h) {
    return 0.5 * b * h;
}