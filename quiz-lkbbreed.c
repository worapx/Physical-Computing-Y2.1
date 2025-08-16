#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main() {
    int n;
    double nano_cap = 6.6, toh_cap = 5.5, mickey_cap = 5.5;
    scanf("%d", &n);
 
    char person[3][20];
    scanf("%s %s %s", person[0], person[1], person[2]);
 
    double lst[3][n];
    double lst_used[3] = {0.0, 0.0, 0.0};

    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &lst[0][i], &lst[1][i], &lst[2][i]);
        lst_used[0] += lst[0][i];
        lst_used[1] += lst[1][i];
        lst_used[2] += lst[2][i];
    }

    for (int p = 0; p < 3; p++) {
        if (strcmp(person[p], "Nano") == 0) {
            printf("%s: %.0lf refills\n", person[p], ceil(lst_used[p] / nano_cap));
        }
        else if (strcmp(person[p], "Toh") == 0 || strcmp(person[p], "Mickey") == 0) {
            printf("%s: %.0lf refills\n", person[p], ceil(lst_used[p] / toh_cap));
        }
    }
 
    return 0;
}