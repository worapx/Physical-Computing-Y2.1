#include <stdio.h>
int main() {
    float score;
    scanf("%f", &score);
 
    if (80 <= score && score <= 100) {
        printf("A");
    }
    else if (70 <= score && score < 80) {
        printf("B");
    }
    else if (60 <= score && score < 70) {
        printf("C");
    }
    else if (50 <= score && score < 60) {
        printf("D");
    }
    else if (0 <= score && score < 50) {
        printf("F");
    }
    else {
        printf("Out of Range");
    }
 
    return 0;
}