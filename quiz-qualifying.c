#include <stdio.h>
int main() {
    float t1, t2, t3;
    char n1[36], n2[36], n3[36];

    scanf("%f", &t1);
    scanf(" %[^\n]", n1);

    scanf("%f", &t2);
    scanf(" %[^\n]", n2);

    scanf("%f", &t3);
    scanf(" %[^\n]", n3);


    if (t1 <= t2 && t1 <= t3) {
        printf("%s is Fastest : %.3f", n1, t1);
    } else if (t2 <= t1 && t2 <= t3) {
        printf("%s is Fastest : %.3f", n2, t2);
    } else {
        printf("%s is Fastest : %.3f", n3, t3);
    }

    return 0;
}