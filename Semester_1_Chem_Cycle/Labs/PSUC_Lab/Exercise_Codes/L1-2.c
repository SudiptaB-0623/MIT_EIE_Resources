/*Write a C program to find the sum, difference, product and quotient of 2 numbers.*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int a,b,sum,diff,pro,quo;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);

    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;

    printf("%d + %d = %d \n",a,b,sum);
    printf("%d - %d = %d \n",a,b,diff);
    printf("%d * %d = %d \n",a,b,pro);
    printf("%d / %d = %d \n",a,b,quo);

    return 0;
}
