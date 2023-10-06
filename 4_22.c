// 22.	C program to calculate x^y (for).

#include<stdio.h>

int main()
{
    int x,y,i,p=1;

    printf("enter x and y: \n");
    scanf("%d %d",&x,&y);

    for(i=1; i<=y; i++)
    {
        p*=x;

    }

    printf("%d ^ %d = %d",x,y,p);
    return 0 ;   
}