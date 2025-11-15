#include <stdio.h>
int main() {
    float n1, n2, n3, mid;
    scanf("%f %f %f", &n1, &n2, &n3);
     
    if ((n1 >= n2 && n1 <= n3) || (n1 >= n3 && n1 <= n2)) {
        mid = n1;
    }
    if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3)) {
        mid = n2;
    }
    if ((n3 >= n2 && n3 <= n1) || (n3 >= n1 && n3 <= n2)) {
    mid = n3;
    }
 
    printf("%.2f", mid);
 
    return 0;
}