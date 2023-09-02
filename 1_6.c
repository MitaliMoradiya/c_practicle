// 6.	C program to calculate simple interest.

#include <stdio.h>

int main()
{
    float p,r,n,si;

    printf("Enter Principle amount: ");
    scanf("%f",&p);

    printf("Enter Rate of Interest : ");
    scanf("%f",&r);

    printf("Enter Number of Month: ");
    scanf("%f",&n);

    si = (p*r*n)/100;

    printf("Simple interest: %f", si);

    return 0;


}