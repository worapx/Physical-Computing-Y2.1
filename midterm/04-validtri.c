#include <stdio.h>
int main() {
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.");
    }
    else {
        printf("Triangle is not valid.");
    }
 
    return 0;
}