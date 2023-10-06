// 19.	C program to find the factorial of a number (for).

#include<stdio.h>
int main()
{
    int n,count,fact=1;

    printf("Enter any num: ");
    scanf("%d",&n);

    for(count=1; count<=n; count++)
    {
        fact = fact*count;
    }

    printf("Factorial of %d is: %d ",n,fact);

        return 0;

    

}