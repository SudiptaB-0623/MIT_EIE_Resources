/*Generate prime numbers between 2 given limits.(use while loop)*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int l,u,x,y=0;

    printf("\nEnter lower limit : ");
    scanf("%d",&l);
    printf("\nEnter upper limit : ");
    scanf("%d",&u);

    x=l+1;

    printf("\nThe prime numbers between %d & %d are : \n",l,u);

    while(x<u)
    {
            if(x==1)
            {
                x++;
                continue;
            }
            int t=2,flag=0;
            while(t<=(x/2))
            {
                if(x%t==0)
                {
                    flag=1;
                    break;
                }
                t++;
            }
            if(flag==0)
            {
                printf("%d   ",x);
                y++;
            }
            x++;
    }
    if(y==0)
    {
        printf("None\n",x);
    }

    return 0;
}
