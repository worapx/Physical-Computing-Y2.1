#include <stdio.h>
#include <math.h>
int main() {
    float old_price, new_price, discount, piece;
 
    scanf("%f", &old_price);
    scanf("%f", &discount);
    scanf("%f", &piece);
    
    float inpro2 = floor(piece/3);
    float pro1 = (old_price * piece)*((100-discount)/100);
    float pro2 = (old_price * 2)*inpro2 + ((piece - (inpro2*3))*old_price);

    if (roundf(pro1) <= roundf(pro2)) {
        printf("Discount %.0f%\n", discount);
        new_price = pro1;
    }
    else {
        printf("Buy 2 Get 1\n");
        new_price = pro2;
    }
    printf("%.2f", new_price);
 
    return 0;
}