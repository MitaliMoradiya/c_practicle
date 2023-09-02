// 3.	C program to convert centigrade into Fahrenheit. Formula: F= (1.8 * C) +32.

#include <stdio.h>
 
 int main()
 {
    float c,fh;

    printf("Enter centigrade: ");
    scanf("%f",&c);

    fh = (c*1.8) + 32;

    printf("Fahrenhit= %f",fh);

    return 0;

 }

 