#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char *message = (char*) malloc (101 * sizeof(char));
    scanf("%[^\n]s", message);

    int lower = 0, upper = 0, digit = 0;
    char *end = message;
    while (*end != '\0') {
        if (islower(*end)) {
            lower++;
        }
        else if (isupper(*end)) {
            upper++;
        }
        else if (isdigit(*end)) {
            digit++;
        }
        end++;
    }

    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);

    return 0;
}
