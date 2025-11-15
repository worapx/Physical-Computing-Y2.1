#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str = (char*) malloc(101 * sizeof(char));
    scanf("%[^\n]s", str); //รับstr ใส่ null terminater ให้อัตโนมัติ
 
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
 
    while (end >= str) {
        printf("%c", *end--);
    }
    free(str);
 
    return 0;
}