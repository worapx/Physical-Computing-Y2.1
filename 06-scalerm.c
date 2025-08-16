#include <stdio.h>

int main() {
    double m1[3][3];
    int scalar = 1;

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%lf", &m1[r][c]);
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (r == c) {
                if (m1[r][c] != m1[0][0]) {
                    scalar = 0;
                }
            } else {
                if (m1[r][c] != 0) {
                    scalar = 0;
                }
            }
        }
    }

    if (scalar) {
        printf("This is a scalar matrix\n");
    } else {
        printf("This is not a scalar matrix\n");
    }

    return 0;
}
