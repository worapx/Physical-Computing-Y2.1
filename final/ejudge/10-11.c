#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    typedef struct {
        char name[60];
        char surname[60];
        char sex[10];
        int age;
        char id[10];
        float gpa;
    } student_info;

    student_info std[20];

    for (int i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %f",
              std[i].name, std[i].surname, std[i].sex,
              &std[i].age, std[i].id, &std[i].gpa);
    }

    char find_condition[8];
    scanf("%s", find_condition);

    for (int i = 0; find_condition[i]; i++) {
        find_condition[i] = tolower((unsigned char)find_condition[i]);
    }

    if (strcmp(find_condition, "name") == 0) {
        for (int i = 0; i < 19; i++) {
            for (int j = i + 1; j < 20; j++) {
                if (strcmp(std[i].name, std[j].name) > 0) {
                    student_info temp = std[i];
                    std[i] = std[j];
                    std[j] = temp;
                }
            }
        }
    }

    else if (strcmp(find_condition, "surname") == 0) {
        for (int i = 0; i < 19; i++) {
            for (int j = i + 1; j < 20; j++) {
                if (strcmp(std[i].surname, std[j].surname) > 0) {
                    student_info temp = std[i];
                    std[i] = std[j];
                    std[j] = temp;
                }
            }
        }
    }

    else if (strcmp(find_condition, "id") == 0) {
        for (int i = 0; i < 19; i++) {
            for (int j = i + 1; j < 20; j++) {
                if (strcmp(std[i].id, std[j].id) > 0) {
                    student_info temp = std[i];
                    std[i] = std[j];
                    std[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        if (strcmp(std[i].sex, "Male") == 0) {
            printf("Mr %c %s (%d) ID: %s GPA %.2f\n",
                   std[i].name[0], std[i].surname,
                   std[i].age, std[i].id, std[i].gpa);
        } else {
            printf("Miss %c %s (%d) ID: %s GPA %.2f\n",
                   std[i].name[0], std[i].surname,
                   std[i].age, std[i].id, std[i].gpa);
        }
    }

    return 0;
}
