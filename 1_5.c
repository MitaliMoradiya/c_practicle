// 5.	C program to calculate the total salary of an employee given Allowance1 is 33% of Basic Pay, Allowance2 is 73% of Basic Pay and Deduction is 52% of Basic Pay.

#include <stdio.h>

int main()
{
    int salary,allowance1, allowance2,deduction,basic_pay;

    printf("enter salary:");
    scanf("%d",&salary);

    allowance1 =salary*(33/100);
    allowance2 = salary*(73/100);
    deduction = salary*(52/100);

    basic_pay = salary+allowance1 + allowance2 -deduction;

    printf("Basic_salary= %d",basic_pay);

    return 0;


}