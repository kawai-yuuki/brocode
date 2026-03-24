#include <stdio.h>

int main(void) {

    int minutes = 0;
    double years = 0.0;
    double days = 0.0;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minutes);
    
    days = minutes / (24.0 * 60.0);
    years = minutes / (365.25 * 24 * 60);

    // printf("%d\n", minutes);
    printf("%lf\n", days);
    printf("%lf\n", years);

    return 0;
}