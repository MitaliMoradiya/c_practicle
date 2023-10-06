// 20.	C program to check whether a number is prime or not (for).
    // prime number only divide by 1 and byself

#include<stdio.h>
int main()
{
    int n,count=0,i;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    printf("prime number");

    else
    printf("not a prime number");

    return 0;
}