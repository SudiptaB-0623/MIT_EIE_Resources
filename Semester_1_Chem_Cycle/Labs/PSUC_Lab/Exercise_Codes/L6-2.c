/*Find the trace and normal of a given square matrix
[Hint: Trace= sum of principal diagonal elements
Norm= SQRT (sum of squares of the individual elements of an array)]*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p,trace=0,norm=0;
    printf("\nEnter number of rows and columns of the matrix : ");
    scanf("%d",&p);

    int mat[p][p];
    printf("\nEnter elements of the square matrix : ");
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
            norm=norm+(mat[i][j]*mat[i][j]);
            if(i==j)
            {
                trace=trace+mat[i][j];
            }
        }
    }

    norm=sqrt(norm);

    printf("\nTrace of matrix = %d",trace);
    printf("\nNormal of matrix = %d",norm);

    return 0;
}
