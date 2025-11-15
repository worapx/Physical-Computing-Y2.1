#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);

    printf("%c\n", (c1+1));
    printf("%c\n", c2);
    printf("%c\n", (c3+1));
    printf("%c\n", c4);
    printf("%c\n", (c5+1));

    return 0;
}