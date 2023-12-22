/*Write a program to demonstrate use of break and continue statements in for loop*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int x,i;


    printf("\nPrint a number between 10 and 20 : ");
    scanf("%d",&x);

    for(i = 0; i < 20; i++)
    {
        if(i==x)
        {
            break; // breaks out of the for loop
        }

        if( i % 4 == 0 )
        {
            /*
                when i is divisible by 4
                continue to the next iteration
            */
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
