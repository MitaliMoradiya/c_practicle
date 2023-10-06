// 15.	C program to find the sum of all numbers from 1 to
// “N” (while).


#include <stdio.h>

int main()
{
    int num, count=1, sum=0;

    printf("Enter the num: ");
    scanf("%d", &num);

    printf("sum of numbers is: ",num);

    while(count <= num)
    {
        sum = sum + count;
        printf("%d", count);
        count++;
        
        if(count > num)
        {
            printf("= %d\n", sum);
        }
        else
        {
            printf("+");
        }
    }
    printf("%d\n",sum);

    return 0;

}