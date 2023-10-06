// 32.	C program using functions to check whether a three digit number is an Armstrong number or not.

#include<stdio.h>
int Isarmstrong(int originalnum){
    int rem = 0;
    int sum = 0;
    int power = 0;
    
    int num = originalnum;
    while (num != 0)\
    {
        rem = num % 10;
        power = rem * rem * rem;
        sum = sum + power;
        num = num / 10;
    }
    
    if (sum == originalnum)
        return 0;
    else
        return 1;
}

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (Isarmstrong(num) == 0){
        printf("%d is an Armstrong Number.", num);
    }
    else{
        printf("%d is not an Armstrong Number.", num);
    }
    return 0;
}