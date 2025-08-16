#include <stdio.h>
#include <math.h>
 
int main() {
    int celsius;
    scanf("%d", &celsius);

    float fahrenheit = (celsius * 9 / 5.0) + 32;
    
    printf("%.1f\n", fahrenheit);
    return 0;
}