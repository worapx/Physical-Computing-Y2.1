#include <stdio.h>
int main() {
    int age, day, price;

    scanf("%d", &age);
    scanf("%d", &day);

    if (day == 4) {
        price = 100;
    }

    else {
        if (age <= 12) {
            price = 120;
        }
        else if (12 < age && age <= 59) {
            price = 220;
        }
        else {
            price = 140;
        }

        if (day == 7 || day == 1) {
            price += 20;
        }
    }
    printf("Ticket price: %d Baht", price);

    return 0;
}