/*
Author: Yuki Kawai
purpose: This program is going to calculate the area of a rectangle
*/

#include <stdio.h>

int main (void) {
    double width = 2.0;
    double height = 3.0;
    double perimeter = (width + height) * 2.0;
    double area = width * height;

    printf("perimeter: %f\n", perimeter);
    printf("area: %f\n", area);
    
    return 0;
}