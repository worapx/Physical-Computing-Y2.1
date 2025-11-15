#include <stdio.h>
#include <ctype.h>
int main() {
    char c1;
    scanf(" %c", &c1);
 
    if (isdigit(c1)) {
        printf("number");
    }
    else if (isupper(c1)) {
        printf("uppercase"); 
    }
    else if (islower(c1)) {
        printf("lowercase"); 
    }
    else {
        printf("error");
    }

    return 0;
}