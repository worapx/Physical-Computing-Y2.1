#include <stdio.h>
int main() {
    int quacks;
    scanf("%d", &quacks);

    if (quacks == 0) {
        printf("Duck Type: Silent Duck");
    }
    else if (1 <= quacks && quacks <= 10) {
        printf("Duck Type: Chill Duck");
    }
    else if (11 <= quacks && quacks <= 50) {
        printf("Duck Type: Happy Duck");
    }
    else if (50 < quacks) {
        printf("Duck Type: Talkative Duck");
    }
    else {
        printf("Error");
    }

    return 0;
}