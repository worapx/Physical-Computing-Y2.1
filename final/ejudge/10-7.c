#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf(" %[^\n]", str);

    int duplicate = 1;
    while (duplicate) {
        duplicate = 0; 
        char temp[101];
        int ti = 0;

        for (int i = 0; i < strlen(str); i++) {
            if (i < (int)strlen(str) - 1 && str[i] == str[i+1]) {
                duplicate = 1;
                i++;
            } else {
                temp[ti++] = str[i];
            }
        }
        temp[ti] = '\0';

        if (duplicate) {
            printf("%s\n", temp);
        }

        strcpy(str, temp);
    }

    return 0;
}
