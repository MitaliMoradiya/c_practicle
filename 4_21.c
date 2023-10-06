// 21.	C program to generate first “N” Fibonacci numbers(for).
        // fibonacci number = additon of first 2 numbers 1,2(2+1),3,(3+2)5...

    #include<stdio.h>
    int main()
    {
        int n1=0, n2=1,n3, count, num;

        printf("Enter any Number: ");
        scanf("%d", &num);


        printf("\n%d\n%d",n1,n2);

        for(count=3; count <= num; count++)
        {
            n3 = n1 + n2;
            printf("%d\n",n3);

            n1=n2;
            n2=n3;

        }
        return 0;

    }

