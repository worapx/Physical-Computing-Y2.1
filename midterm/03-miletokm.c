#include <stdio.h>
int main() {
    float miles;
    scanf("%f", &miles);

    float km = miles * 1.60934;
    printf("%.2f", km);

    return 0;
}