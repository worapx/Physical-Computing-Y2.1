#include <stdio.h>
int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d x %d = %d\n", m, i, m*i);
        i++;
    }

    return 0;
}