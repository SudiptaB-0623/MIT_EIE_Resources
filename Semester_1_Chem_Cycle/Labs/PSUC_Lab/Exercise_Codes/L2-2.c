/*Find the largest among given 3 numbers*/


#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int a,b,c;
    printf("\nEnter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\nThe largest number is : %d",a);
        }
        else
        {
            printf("\nThe largest number is : %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\nThe largest number is : %d",b);
        }
        else
        {
            printf("\nThe largest number is : %d",c);
        }
    }


    return 0;
}
