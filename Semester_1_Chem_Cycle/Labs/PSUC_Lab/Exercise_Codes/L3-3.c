/*Check if the sum of the cubes of all digits of an inputted number equals the number
itself (Armstrong Number)(use while loop)*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,temp,rem,sum=0;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }

    if(sum==num)
    {
        printf("\nThe number is an Armstrong number.\n");
    }
    else
    {
        printf("\nThe number is not an Armstrong number.\n");
    }

    return 0;
}
