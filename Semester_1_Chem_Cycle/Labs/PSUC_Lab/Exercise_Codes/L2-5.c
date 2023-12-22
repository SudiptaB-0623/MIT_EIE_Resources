/*Write a program that will read the value of x and evaluate the following function
Use else if statements & Print the result (‘Y’ value)*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int x,y;
    printf("\nEnter the value of x : ");
    scanf("%d",&x);

    if(x==0)
    {
        y=0;
        printf("\nY = %d",y);
    }
    else if(x>0)
    {
        y=1;
        printf("\nY = %d",y);
    }
    else if(x<0)
    {
        y=-1;
        printf("\nY = %d",y);
    }

    return 0;
}
