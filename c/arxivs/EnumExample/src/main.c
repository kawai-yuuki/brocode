/* 
Author: Yuki Kawai
Purpose: This program prints enumerate types
Date: 2026/3/15

*/

#include <stdio.h>

int main (void) {
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company assigned_1;
    enum company assigned_2;
    enum company assigned_3;

    assigned_1 = XEROX;
    assigned_2 = GOOGLE;
    assigned_3 = EBAY;

    printf("%d\n", assigned_1);
    printf("%d\n", assigned_2);
    printf("%d\n", assigned_3);
    
    return 0;
}