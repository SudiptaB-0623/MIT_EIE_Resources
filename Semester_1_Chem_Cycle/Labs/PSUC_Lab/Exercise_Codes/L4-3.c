/*Evaluate the sine series, sin(x)= x- x^3/3! + x^5/5!–x^7/7!+ ……… to n terms*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");


    int x,n,t=0;
    float val=0;

    printf("\nEnter the value of 'x' : ");
    scanf("%d",&x);
    printf("\nEnter the value of 'n' : ");
    scanf("%d",&n);

    printf("\nsin(%d) =  ",x);

    for(int i=1,j=1;i<=n;i++,j=j+2)
    {
        float fact=1;
        for(int k=j;k>=1;k--)
        {
            fact=fact*k;

        }
        if(i%2==0)
        {
            val=val-(pow(x,j)/fact);
            t++;
            printf(" - (%d^%d)/%d!",x,j,j);
        }
        else
        {
            val=val+(pow(x,j)/fact);
            t++;
            if(t==1)
            {
                printf(" %d",x);
                continue;
            }
            printf(" + (%d^%d)/%d!",x,j,j);
        }

    }

    printf("\ = %.4f",val);

    return 0;
}
