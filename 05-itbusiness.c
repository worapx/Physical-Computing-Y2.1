#include <stdio.h>
int main() {
    float acc, wallet, amount;
    char process;
    int error = 0;

    scanf("%f", &acc);
    scanf("%f", &wallet);


    while (process != 'E' && error <= 3) {
        scanf(" %c %f", &process, &amount);

        if (process == 'D') {
            if (wallet >= amount) {
                acc += amount;
                wallet -= amount;
            }
            else {
                error++;
            }
        }
        else if (process == 'W') {
            if (acc >= amount) {
                wallet += amount;
                acc -= amount;
            }
            else {
                error++;
            }
        }
    }

    printf("%.2f\n", acc);
    printf("%.2f", wallet);
     
    return 0;
}