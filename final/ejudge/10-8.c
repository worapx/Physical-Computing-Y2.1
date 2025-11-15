#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[2000], new_str[2000];
    scanf("%[^\n]", str);

    for (int i = 0; str[i]; i++) {
        str[i] = tolower((char)str[i]);
    }

    char *ptr = str;
    int first = 1;
    while ((ptr = strstr(ptr, "cat")) != NULL) {
        if (!first) printf(", ");
        printf("%ld", ptr - str);
        ptr += 3;
        first = 0;
    }

    return 0;
}