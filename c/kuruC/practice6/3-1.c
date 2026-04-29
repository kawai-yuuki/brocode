#include <stdio.h>

int main(void)
{
    int value;
    double discount_10, discount_30, discount_50, discount_80;

    /*入力*/
    printf("Enter the value: ");
    scanf("%d", &value);

    /*計算*/
    discount_10 = value * (1 - 0.1);
    discount_30 = value * (1 - 0.3);
    discount_50 = value * (1 - 0.5);
    discount_80 = value * (1 - 0.8);

    /*表示*/
    printf("%lf, %lf, %lf, %lf\n", discount_10, discount_30, discount_50, discount_80);

}