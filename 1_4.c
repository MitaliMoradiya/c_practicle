// 4.	C program to swap variable values of two variables
        // a.	Using a temporary variable

        #include <stdio.h>

        int main()
        {
            int  a,b,temp;

            a=10;
            b=20;
            temp=a;
            a=b;
            b=temp;

            printf ("after Swapping= a=%d , b=%d",a,b);

            return 0;

        }
