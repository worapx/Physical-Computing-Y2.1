#include <stdio.h>
int main() {
    double milestone;
    scanf("%lf", &milestone);
  
    if (0.0 <= milestone && milestone <= 5.032) {
        printf("Bangkok");  
    }
    else if (5.032 < milestone && milestone <= 35.4771) {
        printf("Samut Prakarn");    
    }
    else if (35.477 < milestone && milestone <= 52.900) {
        printf("Chachoengsao");
    }
    else if (52.900 < milestone && milestone <= 58.855) {
        printf("Chon Buri");
    }
    else {
        printf("InValid");
    }
  
    return 0;
}