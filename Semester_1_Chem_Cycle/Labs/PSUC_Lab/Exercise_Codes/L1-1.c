/*Write a C program to add two integers a and b read through the keyboard.
Display the result using third variable sum  */

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int a,b,sum;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("The sum of the two numbers is %d",sum);
    return 0;
}
