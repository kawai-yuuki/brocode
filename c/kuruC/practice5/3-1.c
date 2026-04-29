#include <stdio.h>

int main(void)
{
    int juice = 198;
    int milk =138;
    int money = 1000;
    int change = 0;
    float consuption_tax = 1.05;
    change = (int)(money - ((juice + milk *2) * consuption_tax));

    printf("change = %d\n", change);
    return 0;

}