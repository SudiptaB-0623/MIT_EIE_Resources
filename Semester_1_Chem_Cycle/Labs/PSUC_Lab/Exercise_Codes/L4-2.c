/*Generate Floyd’s triangle using natural numbers for a given limit N. (using for loops)*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");


    int n,v=1;

    printf("\nEnter the value of 'n' : ");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%d  ",v);
            v++;
        }
    }

    return 0;
}
