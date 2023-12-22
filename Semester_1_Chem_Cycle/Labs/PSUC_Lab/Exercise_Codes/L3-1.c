/*Reverse a given number and check if it is a palindrome or not. (use while loop)*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,x,rev=0,y;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    y=num;

    while(y!=0)
    {
        x=y%10;
        rev=rev*10+x;
        y=y/10;
    }

    if(rev==num)
    {
        printf("\nThe number is a palindrome number.\n");
    }
    else
    {
         printf("\nThe number is not a palindrome number.\n");
    }

    return 0;
}
