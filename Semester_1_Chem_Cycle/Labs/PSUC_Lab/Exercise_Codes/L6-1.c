/*Find whether a given matrix is symmetric or not*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p,q,temp=0;
    printf("\nEnter number of rows and columns of the matrix : ");
    scanf("%d %d",&p,&q);

    if(p!=q)
    {
        printf("\nSquare matrix cannot be formed !!!");
    }
    else
    {
        int mat[p][q];
        printf("\nEnter elements of the matrix : ");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }

        printf("\nMatrix : \n");
        for(int i=0;i<p;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<q;j++)
            {
                printf("%d  ",mat[i][j]);
            }
        }


        for(int i=0;i<p;i++)
        {
            for(int j=i;j<q;j++)
            {
                if(mat[i][j]!=mat[j][i])
                {
                    temp=1;
                    break;
                }
            }
        }

        if(temp==0)
            printf("\nSymmetric matrix.");
        else
             printf("\nAsymmetric matrix.");


    }


    return 0;
}
