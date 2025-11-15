#include <stdio.h>
int main() {
    double e20, waste[4];
    int path[4];

    scanf("%lf", &e20);

    for (int i = 0; i < 4; i++) {
        scanf(" %d", &path[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf(" %lf", &waste[i]);
    }

    double liters[4], cost[4];
    double expressway = 0.0, romklao = 0.0;
    int exd = 0, rkd = 0;
    for (int d = 0; d < 4; d++) {
        if (path[d] == 1) {
            liters[d] = 29.0/waste[d];
            cost[d] = (liters[d]*e20) + 60.0;
            expressway += cost[d];
            exd++;
        }
        else {
            liters[d] = 25.0/waste[d];
            cost[d] = (liters[d]*e20);
            romklao += cost[d];
            rkd++;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", d+1, liters[d], cost[d]);
    }
    
    double avg_ex = 0, avg_rk = 0;
    if (exd != 0) {
        avg_ex = expressway/exd;
    }
    if (rkd != 0) {
        avg_rk = romklao/rkd;
    }
    printf("Expressway: %.2lf Baht\n", avg_ex);
    printf("Romklao: %.2lf Baht", avg_rk);

    return 0;
}