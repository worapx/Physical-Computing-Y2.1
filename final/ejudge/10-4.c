#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    //try with pointer
    char *str = (char*) malloc(151 * sizeof(char));
    scanf(" %[^\n]", str);
    
    int count = 0, ch = 0, length = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        if (isspace(*ptr)) {
            count++;
        }
        length++;
        ptr++;

    }
    count++;
    printf("%d words\n", count);
    printf("----\n");

    ptr = str;
    while (ptr < str + length) {
        if (isspace(*ptr)) {
            printf(" : %d\n", ch);
            ch = 0;
        }
        else {
            printf("%c", tolower(*ptr));
            ch++;
        }
        ptr++;
    }
    printf(" : %d\n", ch);

    free(str);

    return 0;
}