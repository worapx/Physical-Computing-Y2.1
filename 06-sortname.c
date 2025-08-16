#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char first[20][60], last[20][60];

    for (int i = 0; i < 20; i++) {
        scanf("%s %s", first[i], last[i]);

        first[i][0] = toupper(first[i][0]);
        for (int j = 1; first[i][j] != '\0'; j++) {
            first[i][j] = tolower(first[i][j]);
        }

        last[i][0] = toupper(last[i][0]);
        for (int j = 1; last[i][j] != '\0'; j++) {
            last[i][j] = tolower(last[i][j]);
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {
            int cmpFirst = strcmp(first[j], first[j + 1]);
            if (cmpFirst > 0 || (cmpFirst == 0 && strcmp(last[j], last[j + 1]) > 0)) {
                // สลับชื่อ
                char temp[50];
                strcpy(temp, first[j]);
                strcpy(first[j], first[j + 1]);
                strcpy(first[j + 1], temp);

                // สลับนามสกุล
                strcpy(temp, last[j]);
                strcpy(last[j], last[j + 1]);
                strcpy(last[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        printf("%s %s\n", first[i], last[i]);
    }

    return 0;
}
