// 4.	C program to swap variable values of two variables1
        //without using third variable

        #include <stdio.h>

        int main()
        {
            int a,b;

            printf("enter value of a:");
            scanf("%d",&a);

            printf("enter value of b:");
            scanf("%d",&b);

            a=a+b;                   // a= 10+ 20  (a=30)
            b=a-b;
            a=a-b;

            printf("after swapping value of A: %d", a);
             printf("\n after swapping value of B: %d", b);

            return 0;

        }