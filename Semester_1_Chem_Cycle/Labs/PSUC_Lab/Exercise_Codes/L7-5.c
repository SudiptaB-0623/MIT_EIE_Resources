/*Write a function CornerSum which takes as a parameter, no. of rows and no. of columns of a matrix and returns the sum of the
elements in the four corners of the matrix. Write a main function to test the function*/

#include<stdio.h>

#define M 20
#define N 20

int CornerSum(int arr[M][N],int row,int col)
{

    printf("\n\nFunction executed \n");
    int sum;

    sum=arr[0][0]+arr[0][col-1]+arr[row-1][0]+arr[row-1][col-1];
    return (sum);

}

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int rw,cl,s,mat[M][N];
    printf("\nEnter number of rows : ");
    scanf("%d",&rw);
    printf("\nEnter number of columns : ");
    scanf("%d",&cl);



    printf("\nEnter the elements of the matrix : ");
    for(int i=0;i<rw;i++)
    {
        for(int j=0;j<cl;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nMatrix : \n");
    for(int i=0;i<rw;i++)
    {
        printf("\n\t\t");
        for(int j=0;j<cl;j++)
        {
            printf("%d  ",mat[i][j]);
        }
    }

    s=CornerSum(mat,rw,cl);

    printf("\nSum of the elements in the four corners of the matrix : %d\n",s);

    return 0;
}
