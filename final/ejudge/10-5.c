#include <stdio.h>
#include <ctype.h>
int main() {
    char str[201];
    scanf(" %[^\n]", str);

    char *ptr = str;
    while (*ptr != '\0') {
        if (isupper(*ptr)) {
            printf("%c.", *ptr);
        }
        ptr++;
    }

    return 0;
}