#include <stdio.h>

int main(void) {
    int input_seconds;
    int hours;
    int minutes;
    int seconds;

    printf("seconds: ");
    scanf("%d", &input_seconds);

    hours = input_seconds / 3600;
    minutes = (input_seconds - hours * 3600) / 60;
    seconds = (input_seconds - hours * 3600) % 60;

    printf("%.2d : %.2d : %.2d \n", hours, minutes, seconds);
    return 0;
}