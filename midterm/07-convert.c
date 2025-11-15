#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convert(char* text, char* message);

int main() {
    char t1[101], t2[101];
    char m1[101], m2[101];
    scanf(" %[^\n]", t1);
    scanf(" %[^\n]", t2);

    convert(t1, m1);
    convert(t2, m2);

    printf("*** Results ***\n");
    printf("%s\n", m1);
    printf("%s\n", m2);
    printf("***************\n");

    for (int i = 0; t1[i]; i++) {
        t1[i] = tolower(t1[i]);
    }
    for (int i = 0; t2[i]; i++) {
        t2[i] = tolower(t2[i]);
    }

    if (strcmp(t1, t2) == 0) {
        printf("Both strings are the same.");
    }
    else {
        printf("Both strings are not the same.");
    }

    return 0;
}

void convert(char* text, char* message) {
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        if (isalpha(text[i])) {
            if (isupper(text[i])) {
                message[i] = tolower(text[i]);
            }
            else {
                message[i] = toupper(text[i]);
            }
        }
        else {
            message[i] = text[i];
        }
    }
    message[length] = '\0';
}