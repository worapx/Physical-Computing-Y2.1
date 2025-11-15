#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    scanf("%[^\n]", str);

    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == ' ') continue;

        int min = i;
        for (int j = i + 1; j < len; j++) {
            if (str[j] == ' ') continue;
            if (str[j] < str[min]) {
                min = j;
            }
        }

        if (min != i) {
            char temp = str[i];
            str[i] = str[min];
            str[min] = temp;
        }
    }

    printf("%s", str);
    return 0;
}
