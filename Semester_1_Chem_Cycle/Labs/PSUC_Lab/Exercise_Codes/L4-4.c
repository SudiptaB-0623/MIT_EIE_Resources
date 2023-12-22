/*Check whether a given number is perfect or not.
[Hint: Sum of all positive divisors of a given number excluding the given
number is equal to the number] Ex: 28 = 1+ 2 + 4 + 7 + 14 = 28 is a perfect number*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,sum=0;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==num)
    {
        printf("\nThe number is a perfect number.\n");
    }
    else
    {
         printf("\nThe number is not a perfect number.\n");
    }
    return 0;
}
