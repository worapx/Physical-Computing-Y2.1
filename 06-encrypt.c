#include <stdio.h>
#include <ctype.h>
int main() {
    char wheel[] = {'A','I','W','G','Z','V','F','U','T','H','S','O','J','L','K','D','E','C','N','M','R','Q','P','Y','X','B'};
    char in[201], text[201], message[201];
    scanf(" %[^\n]", in);

    int length = 0;
    while (in[length] != '\0') {
        text[length] = in[length];
        length++;
    }
    text[length] = '\0';

    for (int i = 0; i < length; i++) {
        if (isalpha(text[i])) {
            for (int j = 0; j < 26; j++) {
                if (toupper(text[i]) == wheel[j]) {
                    int new_pos = (j + 5) % 26;
                    char new_char = wheel[new_pos];

                    if (islower(text[i])) {
                        message[i] = tolower(new_char);
                    } else {
                        message[i] = new_char;
                    }
                    break;
                }
            }
        }
        else {
            message[i] = text[i];
        }
    }
    message[length] = '\0';

    printf("%s", message);

    return 0;
}