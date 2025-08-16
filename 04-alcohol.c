#include <stdio.h>
int main() {
    char gender, license;
    float weight, amount, percent, can, hour;
    float percan, drink, alcohol;

    scanf(" %c", &gender); //M:Male F:Female
    scanf("%f", &weight);
    scanf(" %c", &license); //bai kub kee
    scanf("%f", &amount); //cc amount in alcohol
    scanf("%f", &percent); //percent in each can
    scanf("%f", &can);
    scanf("%f", &hour);

    percan = (percent*amount)/100.0; //alcohol per a can
    drink = percan*can; //sum alcohol

    if (gender == 'M') {
        alcohol = drink / (weight * 0.68 * 10);
        alcohol -= 0.015*hour;        
    }
    else if (gender == 'F') {
        alcohol = drink / (weight * 0.55 * 10);
        alcohol -= 0.015*hour;        
    }

    if (license == 'N' || alcohol*1000 > 50.00) {
        printf("Not Safe");
    }
    else {
        printf("Safe");      
    }

    return 0;
}