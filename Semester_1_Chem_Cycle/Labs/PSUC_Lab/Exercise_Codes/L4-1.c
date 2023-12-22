/*Generate the multiplication table for ‘n’ numbers up to ‘k’ terms (using nested
for loops)*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int n,k;

    printf("\nEnter the value of 'n' : ");
    scanf("%d",&n);
    printf("\nEnter the value of 'k' : ");
    scanf("%d",&k);

    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=k;j++)
        {
            int v=i*j;
            printf("%d  ",v);
        }
    }

    return 0;
}
