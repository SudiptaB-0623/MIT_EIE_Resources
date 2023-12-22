/*Swap two numbers without using third variable*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping \na = %d \nb = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping \na = %d \nb = %d",a,b);

    return 0;
}
