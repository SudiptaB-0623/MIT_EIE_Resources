/*Write a program using do-while loop to read the numbers until -1 is encountered. Also
count the number of prime numbers and composite numbers entered by user. [Hint: 1
is neither prime nor composite]*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,prime=0,comp=0;

    do
    {
        printf("\nEnter a number : ");
        scanf("%d",&num);

        if(num!=1 && num!=-1)
        {
            int temp=num,t=2,flag=0;
            while(t<=temp/2)
            {
                if(temp%t==0)
                {
                    flag++;
                    comp++;
                    break;
                }
                t++;
            }
            if(flag==0)
            {
                prime++;
            }

        }
    }
    while(num!=-1);

    printf("\nNumber of prime numbers: %d \nNumber of composite numbers: %d",prime,comp);
    return 0;
}
