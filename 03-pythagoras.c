#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
 
    double c2 = (a*a) + (b*b);
    double longest = sqrt(c2);
    printf("%.2lf", longest);
 
    return 0;
}