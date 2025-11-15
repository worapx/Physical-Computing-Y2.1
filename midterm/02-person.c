#include <stdio.h>

int main() {
    char fname1[30], sname1[30];
    char person2[60], person3[60];

    scanf("%s %s", fname1, sname1);
    getchar();
    scanf("%[^\n]", person2);
    getchar();
    scanf("%[^\n]", person3); /* %[^\n] อ่านทั้งบรรทัด */

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);

    return 0;
}