/*Check whether the given number is odd or even*/


#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("\nThe number is zero.");
    }
    else if(num%2==0)
    {
        printf("\nThe number is even.");
    }
    else if(num%2!=0)
    {
        printf("\nThe number is odd.");
    }


    return 0;
}
