#include <stdio.h>

int main(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d \n", num * -1);
    }
    else {
        printf("%d \n", num);
    }
    return 0;
}