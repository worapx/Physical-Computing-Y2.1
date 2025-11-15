#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int size, jump;
    scanf("%d %d", &size, &jump);
 
    char *str = (char*) malloc((size + 1) * sizeof(char));
    scanf(" %[^\n]", str);
 
    char *str_end = str;
    while (*str_end != '\0') {
        str_end++;
    }
 
    char *ptr = str;
    while (ptr < str_end) {
        printf("%c", *ptr);
        ptr += jump;
    }
 
    free(str);
 
    return 0;
}