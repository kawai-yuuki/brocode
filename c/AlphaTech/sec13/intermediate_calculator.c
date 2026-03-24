#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char operator;
    int num1, num2;

    printf("operator: ");
    scanf("%c", &operator);

    printf("num1: ");
    scanf("%d", &num1);

    printf("num2: ");
    scanf("%d", &num2);

    // printf("%c %f %f \n", operator, num1, num2);

    switch (operator) {
        case '+':
            printf("%d %c %d = %d \n", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d \n", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d \n", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("you cannot divide by 0. \n");
            }
            else {
                printf("%d %c %d = %f \n", num1, operator, num2, num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("you cannot divide by 0. \n");
            }
            else {
                printf("%d %c %d = %f \n", num1, operator, num2, num1 % num2);
            }
            break;
        default:
            printf("ERROR \n");
            break;
    }
    return 0;
}