// 25.	C program to generate the patterns. 

#include<stdio.h>

int main()
{
    int i, j;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}