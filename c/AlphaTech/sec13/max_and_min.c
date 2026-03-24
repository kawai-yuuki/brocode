#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    printf("Enter num1; ");
    scanf("%lf", &num1);
    printf("Enter num2; ");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("max = %lf \n", num1);
        printf("min = %lf \n", num2);
    } else if (num1 < num2) {
        printf("max = %lf \n", num2);
        printf("min = %lf \n", num1);
    } else {
        printf("equal");
    }
    return 0;
}