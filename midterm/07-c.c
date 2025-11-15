#include <stdio.h>
#include <math.h>
 
int main() {
    long x, y;
    double c;
 
    scanf("%ld %ld", &x, &y);
    c = sqrt(pow(x, 2) + pow(y, 2));
 
    printf("sqrt(%ld^2+%ld^2)=%.2lf", x, y, c);
    return 0;
}