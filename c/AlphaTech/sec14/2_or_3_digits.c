#include <stdio.h>

int main(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    if (num / 1000 >= 1) {
        printf("neither double/triple \n");
    }
    else if (num / 100 >= 1 && num / 1000 <= 1) {
        printf("triple-digit \n");
    }
    else if (num / 10 >= 1 && num / 100 <= 1) {
        printf("double-digit \n");
    }
    else {
        printf("neither double/triple \n");
    }
    return 0;
}