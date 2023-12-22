/*Write a program to demonstrate use of break and continue statements in while and
do-while loops*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int x,y,i=1,j=1;

    printf("\nPrint a number between 7 and 17 : ");
    scanf("%d",&x);

    while(i<=18)
    {
        if(i==x)
        {
             printf("\nBreak statement executed in while loop.");

             break;         //breaks out of the while loop
        }
        if(i%4==0)
        {
            printf("\nContinue statement executed in while loop.");
            i++;

            continue;       //continues to the next iteration
        }

        printf("\n%d",i);
        i++;
    }

    do
    {
        if(j==1)
        {
            printf("\n\n\nPrint a number between 6 and 17 : ");
            scanf("%d",&y);
        }

        if(j==y)
        {
             printf("\nBreak statement executed in do-while loop.");

             break;         //breaks out of the while loop
        }
        if(j%5==0)
        {
            printf("\nContinue statement executed in do-while loop.");
            j++;

            continue;       //continues to the next iteration
        }

        printf("\n%d",j);
        j++;
    }while(x<=18);

    return 0;
}
