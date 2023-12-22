/*Perform matrix multiplication*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p,q,m,n;
    printf("\nEnter number of rows and columns of matrix 1 : ");
    scanf("%d %d",&p,&q);
    printf("\nEnter number of rows and columns of matrix 2 : ");
    scanf("%d %d",&m,&n);

    if(q!=m)
    {
        printf("\nMatrices cannot be multiplied !!!");
    }
    else
    {
        int mat1[p][q],mat2[m][n];
        printf("\nEnter elements of matrix 1 : ");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\nEnter elements of matrix 2 : ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }

        printf("\nMatrix 1 : \n");
        for(int i=0;i<p;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<q;j++)
            {
                printf("%d  ",mat1[i][j]);
            }
        }
        printf("\nMatrix 2 : \n");
        for(int i=0;i<m;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<n;j++)
            {
                printf("%d  ",mat2[i][j]);
            }
        }

        //Multiplication of matrices

        int res[p][n];
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp=0;
                for(int k=0;k<q;k++)
                {
                    temp=temp+(mat1[i][k]*mat2[k][j]);
                }
                res[i][j]=temp;
            }
        }

        printf("\nResultant Matrix : \n");
        for(int i=0;i<p;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<n;j++)
            {
                printf("%d  ",res[i][j]);
            }
        }

    }

    return 0;
}
