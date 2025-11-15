#include <stdio.h>
 
int main() {
    char t1[30], t2[30], t3[30], t4[30];
    scanf("%s %s %s %s", t1,t2,t3,t4);

    printf("String 1: %.3s\n", t1);
    printf("String 2: %.4s\n", t2);
    printf("String 3: %.5s\n", t3);
    printf("String 4: %.6s\n", t4);

    return 0;
}