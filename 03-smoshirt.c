#include <stdio.h>

int main() {
    float price, discount;
    int shirt;

    scanf("%f", &price);
    scanf("%f", &discount);
    scanf("%d", &shirt);

    float price_per_one = price * ((100 - discount) / 100);
    float pay = price_per_one * shirt;
    printf("%.2f", pay);

    return 0;
}