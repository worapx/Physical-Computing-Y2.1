#include <stdio.h>
int main() {
    char message[101];
    int length = 0;
    scanf(" %[^\n]", message);

    while (message[length] != '\0') {
        length++;
    }
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", message[i]);
    }
    
    return 0;
}