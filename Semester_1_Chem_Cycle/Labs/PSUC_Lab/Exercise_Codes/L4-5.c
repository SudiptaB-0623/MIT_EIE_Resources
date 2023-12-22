/*Find out the generic root of any number.
[Hint: Generic root is the sum of digits of a number until a single digit is obtained.]
Ex: Generic root of 456 is 4 + 5 + 6 = 15 = 1+5 = 6 */

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num,temp,rem,root;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(root=num;root/10!=0;)
    {
        int sum=0;
        for(temp=root;temp!=0;temp=temp/10)
        {
            rem=temp%10;
            sum=sum+rem;
        }
        root=sum;
    }

    printf("\nGeneric root of %d = %d",num,root);

    return 0;
}
