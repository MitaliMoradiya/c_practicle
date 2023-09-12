// 10.	C program to find the second largest and second smallest of four numbers (else-if).

#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;

    printf("Enter value of n1: ");
    scanf("%d", &n1);

    printf("Enter value of n2: ");
    scanf("%d", &n2);

     printf("Enter value of n3: ");
    scanf("%d", &n3);

     printf("Enter value of n4: ");
     scanf("%d", &n4);

    int largest, secondlargest, smallest, secondsmallest;

    if(n1 > n2)
    {
        largest = n1;
        secondlargest = n2;
    }
        else
        {
            largest = n2;
            secondlargest = n1;
        }

    if(n3 > n4)
    {
        smallest = n4;
        secondsmallest = n3;
    }
        else
        {
            smallest = n3;
            secondsmallest = n4;
        }

    if(n3 > largest)
    {
        secondlargest = largest;
        largest = n3;
    }
    else if (n3 > secondlargest)
    {
        secondlargest =n3;
    }

    if(n4<smallest)
    {
        secondsmallest = smallest;
        smallest = n4;
    }

    else if (n4 < smallest)
    {
        secondsmallest=n4;
    }

    printf("second largest num = %d", secondlargest);
    printf("\n second smallest num = %d", secondsmallest);

    return 0;
}
