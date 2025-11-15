#include <stdio.h>
#include <string.h>
int main() {
    int size;
    scanf("%d", &size);

    char str1[51], str2[41];
    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    int mid_str1 = (size-strlen(str1) + 1)/2;
    int mid_str2 = (size-strlen(str2) + 1)/2;

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < size; col++) {
            if (col == 0 || col == size - 1 || row == 0 || row == 3) {
                printf("*");
            }
            else if (row == 1 && col >= mid_str1 && col < mid_str1 + strlen(str1)) {
                printf("%c", str1[col-mid_str1]);
            }
            else if (row == 2 && col >= mid_str2 && col < mid_str2+strlen(str2)) {
                printf("%c", str2[col-mid_str2]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}