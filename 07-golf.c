#include <stdio.h>
#include <math.h>

double findH(int u, double radius);

int main() {
    int degree, u;
    scanf("%d", &degree);
    scanf("%d", &u);

    double radius = (degree*M_PI)/180;
    double h = findH(u, radius);

    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", h);

    return 0;
}

double findH(int u, double radius) {
    return (pow(u, 2) * pow(sin(radius), 2)) / (2*9.81);
}