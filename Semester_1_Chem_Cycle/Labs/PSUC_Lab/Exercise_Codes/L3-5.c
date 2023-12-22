/*Check whether the given number is strong or not*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,temp,rem,fact,sum=0;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        fact=1;
        rem=temp%10;
        while(rem>=1)
        {
            fact=fact*rem;
            rem--;
        }
        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==num)
    {
        printf("\nThe number is a strong number.\n");
    }
    else
    {
        printf("\nThe number is not a strong number.\n");
    }

    return 0;
}
