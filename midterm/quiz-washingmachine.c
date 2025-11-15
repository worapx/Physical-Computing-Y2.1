#include <stdio.h>
int main() {
    int game;
    scanf("%d", &game);

    double hp = 2800.0, damage = 0.0;
    int hour = game/2;
    while (hour > 0) {
        if (game >= 2) {
            damage += 0.02*hp;
            hp -= 0.02*hp;
            hour--;
        }
    }
    printf("%.2lf\n", damage);

    if (damage > 0.30*2800.00) {
        printf("Danger");
    }
    else {
        printf("Safe");
    }
}