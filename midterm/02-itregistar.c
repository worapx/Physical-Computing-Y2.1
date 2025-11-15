#include <stdio.h>

int main() {
    char firstname[30], lastname[30], id[8];
    int dd,mm,yyyy;
    float gpa;

    scanf("%s %s %s", firstname, lastname, id);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%d\n", dd,mm,yyyy);
    printf("GPA: %.2f", gpa);

    return 0;
}