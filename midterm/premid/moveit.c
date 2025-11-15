#include <stdio.h>
#include <string.h>

int main() {
    int field[3][3];
    char move;
    int space_r, space_c;
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
        scanf("%d ", &field[row][col]);
            if (field[row][col] == 0) {
                space_r = row;
                space_c = col;
            }
        }
    }

    scanf(" %c", &move);
    while (move != 'E') {
        if (move == 'L') {
            field[space_r][space_c] = field[space_r][space_c+1];
            field[space_r][space_c+1] = 0;
            space_c++;
        }
        else if (move == 'R') {
            field[space_r][space_c] = field[space_r][space_c-1];
            field[space_r][space_c-1] = 0;
            space_c--;
        }
        else if (move == 'U') {
            field[space_r][space_c] = field[space_r+1][space_c];
            field[space_r+1][space_c] = 0;
            space_r++;
        }
        else if (move == 'D') {
            field[space_r][space_c] = field[space_r-1][space_c];
            field[space_r-1][space_c] = 0;
            space_r--;
        }
        scanf(" %c", &move);
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", field[row][col]);
        }
        printf("\n");
    }

    return 0;
}