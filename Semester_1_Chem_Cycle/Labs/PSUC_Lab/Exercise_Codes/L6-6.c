/*Search for an element in a given matrix and count the number of its occurrences*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p,q,ele,occr=0;
    printf("\nEnter number of rows and columns of the matrix : ");
    scanf("%d %d",&p,&q);

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

    printf("\n\nEnter the element to be searched : ");
    scanf("%d",&ele);

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            if(ele==mat[i][j])
                occr++;
        }
    }

    printf("\nNumber of occurrences of '%d' = %d",ele,occr);

    return 0;
}
