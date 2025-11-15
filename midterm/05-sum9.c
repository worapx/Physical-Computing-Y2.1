#include <stdio.h>
int main() {
    int n, summ;
    scanf("%d", &n);
    while (n != -9) {
        summ += n;
        scanf("%d", &n);
    }
    printf("%d", summ);
     
    return 0;
}