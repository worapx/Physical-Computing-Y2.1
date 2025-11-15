#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str = (char*) malloc(101 * sizeof(char));

    char ch;
    char *p = str;
    while (scanf(" %c", &ch) == 1 && ch != '-') {
        *p = ch;
        *p++;
    }
    *p = '\0';
 
    char *end = str;
    while (*end != '\0') {
        printf("%c", *end++);
    }
    printf("\n");
    end--;
    
    while (end >= str) {
        printf("%c", *end--);
    }
    free(str);
 
    return 0;
}