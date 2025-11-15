#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Record records[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %ld %ld", records[i].id, records[i].name, &records[i].salary, &records[i].sales);
    }

    char find_id[10];
    scanf("%s", find_id);

    int found = 0;
    for (int j = 0; j < n; j++) {
        if (strcmp(find_id, records[j].id) == 0) {
            double commission = records[j].sales * 0.02;
            double total_income = records[j].salary + commission;

            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", records[j].id, records[j].name, records[j].sales, commission, records[j].salary, total_income);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("ID not found !!!");
    }

    return 0;
}