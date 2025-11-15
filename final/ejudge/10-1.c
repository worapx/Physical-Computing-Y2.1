#include <stdio.h>
#include <ctype.h>
int main() {
    char text[151];
    scanf("%[^\n]", text);
 
    int i = 0;
    while (text[i] != '\0') {
        if (!isspace(text[i])) {
            printf("%c", text[i]);
        }
        i++;
    }
 
    return 0;
}