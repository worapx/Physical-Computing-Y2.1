#include <stdio.h>
#include <string.h>

int main() {
    typedef struct{
        char name[60];
        char surname[60];
        char sex[10];
        int age,id;
        float gpa;
    } student_info;

    student_info std;
    scanf("%s %s %s %d %d %f", std.name, std.surname, std.sex, &std.age, &std.id, &std.gpa);

    char display[70];
    if (strcmp(std.sex, "Male") == 0) {
        printf("Mr %c %s (%d) ID: %d GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
    } else {
        printf("Miss %c %s (%d) ID: %d GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
    }

    return 0;
}
