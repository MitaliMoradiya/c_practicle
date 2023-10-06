// 31.	C program using functions to convert a binary number to its decimal equivalent4

#include<stdio.h>
#include<math.h>
int BinarytoDecimal( int n)
{
    int decimal = 0, i = 0, rem;
    int num = n;
     while(num!=0)
    {
        rem = num%10;
        num = num/10;
        decimal += rem * pow(2, i);
        i++;
    }

    return decimal;
}

int main()
{
	  int number, decimal;

	 printf("Enter binary number to convert into decimal: ");
	 scanf("%d", &number);

     decimal = BinarytoDecimal(number);

	 printf("decimal of %d is : %d", number, decimal);

	return 0;
}