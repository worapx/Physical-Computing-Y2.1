#include <stdio.h>
int main() {
    int inputsec;
    scanf("%d", &inputsec);
    int origin = inputsec;

    int day, hour, min, sec;
    day = inputsec / 86400;
    inputsec %= 86400;

    hour = inputsec / 3600;
    inputsec %= 3600;

    min = inputsec / 60;
    sec = inputsec %= 60;
    
    printf("%d s = %d d %d h %d m %d s ", origin, day, hour, min, sec);

    return 0;
}