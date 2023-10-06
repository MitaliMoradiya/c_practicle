#include <stdio.h>
#include <math.h>


// function to calculate CI
float calculatecompoundinterest(double principal, double rate, int time, int n)
{
    float compoundinterest;
    compoundinterest = principal*pow(1 + (rate/(n*100)), n*time) - principal;
    return compoundinterest;
}

int main()
{
    double principal,rate;
    int time,n;

    printf("enter Principal Amount:");
    scanf("%f",&principal);

    printf("enter annual interest:");
    scanf("%f",&rate);

    printf("enter the time (year): ");
    scanf("%f", &time);

    printf("enter the number of time compund per year: ");
    scanf("%f",&n);


    // calculate compund interst using function
    float compoundinterest = calculatecompoundinterest(principal,rate,time,n);

    printf("compound interst: %.21f\n", compoundinterest);

    return 0;
}