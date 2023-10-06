// 30.	C program using functions to convert a decimal number to its binary equivalent.

#include<stdio.h>

int decimalToBinary( int n)
{
    int binary=0, rem, num, base=1;
    num = n;
    while(num !=0 )
	{
	  rem = num%2;
	  binary = binary + base * rem;
	  base = base*10;
	  num = num/2;
	}

    return binary;
}

int main()
{
	  int number, binary;

	 printf("Enter decimal number to convert into binary: ");
	 scanf("%d", &number);

     binary = decimalToBinary(number);

	 printf("Binary of %d is:  %d", number, binary);

	return 0;
}