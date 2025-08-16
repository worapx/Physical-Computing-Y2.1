#include <stdio.h>

int main() {
    char line[6];
    scanf("%s", line);

    printf("%-80.1s", line);
    printf("%-1s%-79.2s" , "", line);
    printf("%-2s%-78.3s", "", line);
    printf("%-3s%-77.4s", "", line);
    printf("%-4s%-76.5s", "", line);

    return 0;
}