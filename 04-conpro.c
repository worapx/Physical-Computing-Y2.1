#include "stdio.h"
 
int main() {
    int n1, n2, result;
    char expession;
    scanf("%d %d", &n1, &n2);
 
    if (n1 == n2) {
        result = n1 + n2;
        expession = '+';
    }
    else {
        result = n1 - n2;
        expession = '-';
    }
 
    printf("%d %c %d = %d", n1, expession, n2, result);
 
    return 0;
}