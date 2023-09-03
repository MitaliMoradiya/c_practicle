// 8.	C program to check whether a given year is a leap year (if-else).

      // leap year if divisible by 400 and 4

        #include <stdio.h>
        int main()

        {
            int year;

            printf("Enter any year: ");
            scanf("%d",&year);

            if(year % 4 == 0)
            {
                if(year%100!=0 || year%400==0)
                printf("%d is leap year",year);

                else

                printf("%d is not a leap year", year);

            
            }
            else
            printf("%d is not a leap year", year);

            return 0;
        }