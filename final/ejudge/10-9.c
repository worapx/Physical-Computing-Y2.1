#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char text[450];
    scanf(" %[^.]", text);

    int ch = 0, word = 0, line = 0;
    int i = 0;
    while (text[i] != '\0') {
        if (isalpha(text[i])) {
            ch++;
        }
        if (isspace(text[i])) {
            word++;
        }
        i++;
        if (text[i] == '\n') {
            line++;
        }
    }

    printf("Char = %d, word = %d, line = %d", ch, word, line);
}