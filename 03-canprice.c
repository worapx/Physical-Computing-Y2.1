#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.14159265359;
    float price, d, h;
    scanf("%f", &price);
    scanf("%f", &d);
    scanf("%f", &h);

    float volume = h * (pi*((d/2)*(d/2)));
    float can_price_rate = price/volume;
    printf("Volume : %.2fml\n", volume);
    printf("Baht/ml : %.4f", can_price_rate);

    return 0;
}