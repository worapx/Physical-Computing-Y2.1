#include <stdio.h>
int main() {
    int start, stop, summ = 0;
    scanf("%d", &start);
    scanf("%d", &stop);

    printf("pass : ");
    if (start <= stop) {
        while (start <= stop) {
            if (start % 2 == 0) {
                printf("%d ", start);
                summ += start;
            }
            start++;
        }
        printf("\nSum : %d", summ);
    }

    else {
        while (start >= stop) {
            if (start % 2 == 0) {
                printf("%d ", start);
                summ += start;
            }
            start--;
        }
        printf("\nSum : %d", summ);
    }

    return 0;
}