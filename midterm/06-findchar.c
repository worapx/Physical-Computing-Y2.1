#include <stdio.h>
#include <ctype.h>
int main() {
    char text[301];
    scanf(" %[^\n]", text);

    char find;
    scanf(" %c", &find);
    
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    int index[301];
    int j = 0, count = 0;
    for (int i = 0; i < length; i++) {
        if (toupper(text[i]) == toupper(find)) {
            index[j] = i+1;
            j++;
            count++;
        }
    }


    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, find);
        printf("Position: ");
        for (int i = 0; i < count; i++) {
            if (i == count - 1) {
                printf("%d", index[i]);
            }
            else {
                printf("%d, ", index[i]);
            }
        }
    }
    else {
        printf("Not found.");
    }


    return 0;
}