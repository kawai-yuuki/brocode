#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("num1 is big.\n");
    }
    else {
        printf("num2 is big.\n");
    }
    return 0;
}