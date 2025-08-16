#include <stdio.h>

int main() {
    char t1[50], t2[50];
    int one[7], two[7];

    scanf(" %[^\n]", &t1);
    for (int i = 0; i < 7; i++) {
        scanf(" %d", &one[i]);
    }

    scanf(" %[^\n]", &t2);
    for (int i = 0; i < 7; i++) {
        scanf(" %d", &two[i]);
    }

    int f1 = 0, f2 = 0, eq = 0;
    int s1 = 0, s2 = 0;

    for (int i = 0; i < 7; i++) {
        s1 += one[i];
        s2 += two[i];
        if (one[i] < two[i]) {
            f1++;
        }
        else if (one[i] > two[i]) {
            f2++;
        }
        else {
            eq++;
        }
    }

    printf("%s: %d minutes, average %d minutes/day\n", t1, s1, s1/7);
    printf("%s: %d minutes, average %d minutes/day\n", t2, s2, s2/7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", t1, f1, t2, f2, eq);

    return 0;
}