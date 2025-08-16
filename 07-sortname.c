#include <stdio.h>
#include <string.h>
#include <ctype.h>

void selection_sort(char list[][60], int n);

int main() {
    int n;
    scanf("%d", &n);

    char list[n][60], name[60];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", name);

        for (int j = 0; j < strlen(name); j++) {
            if (j == 0 || isspace(name[j - 1])) {
                name[j] = toupper(name[j]);
            }
            else {
                name[j] = tolower(name[j]);
            }
        }
        strcpy(list[i], name);
    }

    selection_sort(list, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", list[i]);
    }

    return 0;    
}


void selection_sort(char list[][60], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(list[min], list[j]) > 0) {
                min = j;
            }
        }
        if (min != i) {
            char temp[60];
            strcpy(temp, list[i]);
            strcpy(list[i], list[min]);
            strcpy(list[min], temp);
        }
    }
}