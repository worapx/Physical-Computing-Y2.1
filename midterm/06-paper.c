#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char *sizes[] = {"A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11", "A12"};
    char x[4], y[4];
    int x_index = -1, y_index = -1;

    scanf("%s", x);
    scanf("%s", y);

    for (int i = 0; i < 13; i++) {
        if (strcmp(x, sizes[i]) == 0) {
            x_index = i;
        }
        if (strcmp(y, sizes[i]) == 0) {
            y_index = i;
        }
    }

    int diff = y_index - x_index;
    int result = 1;
    for (int i = 0; i < diff; i++) {
        result *= 2;
    }

    printf("%d\n", result);

    return 0;
}