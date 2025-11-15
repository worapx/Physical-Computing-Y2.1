#include <stdio.h>
int main() {
    char grade;
    scanf("%c", &grade);
 
    switch (grade) {
        case 'a' :
        case 'A': 
        printf("Genius");
        break;
        case 'b':
        case 'B': 
        printf("Good");
        break;
        case 'c':
        case 'C': 
        printf("Try Harder");
        break;
        case 'd':
        case 'D': 
        printf("Very Bad");
        break;
        case 'f':
        case 'F': 
        printf("Fail");
        break;
        default: printf("Invalid Input");
    }
 
    return 0;
}