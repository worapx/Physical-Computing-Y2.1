#include <stdio.h>

int main() {
    double m1[3][3], m2[3][3], result[3][3];

    //matrix I
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%lf", &m1[r][c]);
        }
    }

    //matrix II
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%lf", &m2[r][c]);
        }
    }

    //A koon B
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            result[r][c] = 0;
            for (int k = 0; k < 3; k++) {
                result[r][c] += m1[r][k] * m2[k][c];
            }
        }
    }

    printf("A x B\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%.2lf ", result[r][c]);
        }
        printf("\n");
    }

    return 0;
}
