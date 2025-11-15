#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    //try with pointer
    char find, *str = (char*) malloc(151 * sizeof(char));
    scanf(" %c", &find);
    scanf(" %[^\n]", str);
    
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (toupper(*ptr) == toupper(find)) {
            count++;
        }
        ptr++;
    }

    printf("%d", count);

    free(str);

    return 0;
}