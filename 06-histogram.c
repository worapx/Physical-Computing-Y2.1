#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);

    char alpha[n];
    int count[n];
    int length = 0;

    char c;
    int inp = 0;

    do {
        scanf(" %c", &c);

        int found = 0;
        for (int i = 0; i < length; i++) {
            if (alpha[i] == tolower(c)) {
                count[i]++;
                found = 1;
                break;
            }
        }

        if (!found) {
            alpha[length] = tolower(c);
            count[length] = 1;
            length++;
        }

        inp++;

    } while (inp < n);


    for (int a = 0; a < length; a++) {
        printf("%c: %d\n", alpha[a], count[a]);
    }

    return 0;
}