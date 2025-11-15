#include <stdio.h>
#include <string.h>

int main() {
    struct Book {
        char id[10];
        char name[100];
        char author[100];
    };

    int n;
    scanf("%d", &n);

    char find[10];
    scanf("%s", find);

    struct Book b[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", b[i].id, b[i].name, b[i].author);
    }

    int found = 0; // flag
    for (int j = 0; j < n; j++) {
        if (strcmp(find, b[j].id) == 0) {
            printf("%s %s %s", b[j].id, b[j].name, b[j].author);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not Found");
    }

    return 0;
}
