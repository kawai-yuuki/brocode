#include <stdio.h>

int main (void) {
    int grade;
    float total_sum;
    int number_count;

    while (grade!=-1){
        printf("Enter your grades or '-1' to stop: ");
        scanf("%d", &grade);
        total_sum += grade;
        number_count += 1;
        // printf("total %f number %d \n", total_grade, number_count);
    }
    total_sum += 1;
    number_count -= 1;
    printf("average grade: %f \n", total_sum/number_count);
    return 0;
}