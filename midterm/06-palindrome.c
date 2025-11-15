#include <stdio.h>
int main() {
    char text[101];
    scanf(" %[^\n]", &text);

    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    char rv[101];
    int j = 0;
    for (int i = length - 1; i >= 0; i--) {
        rv[j] = text[i];
        j++;
    }

    for (int i = 0; i < length - 1; i++) {
        if (text[i] != rv[i]) {
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");

    return 0;
}