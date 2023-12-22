/*To interchange the primary and secondary diagonal elements in the given Matrix*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p;
    printf("\nEnter number of rows and columns of the matrix : ");
    scanf("%d",&p);

    int mat[p][p];
    printf("\nEnter elements of the matrix : ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\nMatrix : \n");
    for(int i=0;i<p;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<p;j++)
        {
            printf("%d  ",mat[i][j]);
        }
    }


    for(int i=0,t=p;i<p;i++,t--)
    {
            int temp=mat[i][i];
            mat[i][i]=mat[i][t-1];
            mat[i][t-1]=temp;
    }

     printf("\nResultant Matrix : \n");
    for(int i=0;i<p;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<p;j++)
        {
            printf("%d  ",mat[i][j]);
        }
    }

    return 0;
}
