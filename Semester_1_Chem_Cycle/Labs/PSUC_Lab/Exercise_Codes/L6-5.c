/*Interchange any two Rows & Columns in the given Matrix*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int p,q,inp,r1,r2,c1,c2;
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

    printf("\nMatrix : ");
    for(int i=0;i<p;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<q;j++)
        {
            printf("%d  ",mat[i][j]);
        }
    }

    printf("\n\nEnter \n1. To exchange rows \n2. To exchange columns \n3. For both the operations\n");
    scanf("%d",&inp);

    if(inp==1 || inp==3)
    {
        printf("\nThere are %d rows in the matrix. \nEnter the number of rows to be exchanged : ",p);
        scanf("%d%d",&r1,&r2);

        for(int i=0;i<q;i++)
        {
            mat[r1-1][i]=mat[r1-1][i]+mat[r2-1][i];
            mat[r2-1][i]=mat[r1-1][i]-mat[r2-1][i];
            mat[r1-1][i]=mat[r1-1][i]-mat[r2-1][i];
        }

        printf("\nMatrix after interchanging rows : \n");
        for(int i=0;i<p;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<q;j++)
            {
                printf("%d  ",mat[i][j]);
            }
        }
    }
    if(inp==2 || inp==3)
    {
        printf("\nThere are %d columns in the matrix. \nEnter the number of columns to be exchanged : ",q);
        scanf("%d%d",&c1,&c2);

        for(int i=0;i<p;i++)
        {
            mat[i][c1-1]=mat[i][c1-1]+mat[i][c2-1];
            mat[i][c2-1]=mat[i][c1-1]-mat[i][c2-1];
            mat[i][c1-1]=mat[i][c1-1]-mat[i][c2-1];
        }
    }

    if(inp!=1 && inp!=2 && inp!=3)
    {
        printf("\nInvalid input !!!");
    }
    else if(inp==2 || inp==3)
    {
        printf("\nUpdated Matrix : \n");
        for(int i=0;i<p;i++)
        {
            printf("\n\t\t");
            for(int j=0;j<q;j++)
            {
                printf("%d  ",mat[i][j]);
            }
        }
    }

    return 0;
}
