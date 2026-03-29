#include <stdio.h>

int main(void) {
    int numOfAsterisks;
    printf("Enter a number of asterisks you would like to see: ");
    scanf("%d", &numOfAsterisks);

    while (numOfAsterisks>0){
        printf("*");
        numOfAsterisks = numOfAsterisks - 1;
    }
    printf("\n");
    return 0;
}