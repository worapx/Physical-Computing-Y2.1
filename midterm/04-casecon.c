#include <stdio.h>
int main() {
    char c1;
    scanf(" %c", &c1);
 
    if (c1 >= 'A' && c1 <= 'Z') {
        printf("%c", c1 + 32);
    }
    else if (c1 >= 'a' && c1 <= 'z') {
        printf("%c", c1 - 32); 
    }
    else {
        printf("error");
    }

    return 0;
}