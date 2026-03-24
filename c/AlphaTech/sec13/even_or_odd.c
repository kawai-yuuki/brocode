#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int even_odd_flag;
    even_odd_flag = num % 2;

    if (even_odd_flag == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    // if (num%2==0){
    //     printf("%d is EVEN \n", num);
    // } else {
    //     printf("%d is ODD \n", num);
    // }
    return 0;
}