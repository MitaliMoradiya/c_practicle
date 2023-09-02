// 2.	C program to find the area and circumference of a circle.

#include <stdio.h>

int main()
{
    float r,a,c;

    printf("Enter radius: ");
    scanf("%f",&r);

    a= 3.14*r*r;
    c=2*3.14*r;

    printf("AREA = %f",a);
    printf(" \n CIRCUMFERRENCE = %f",c);

    return 0;
}