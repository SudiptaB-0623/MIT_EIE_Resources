/*Insert an element into a 1D array by getting an element and the position from the user*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int arr[100],n,pos,newele;

    printf("\nEnter number of elements : ");
    scanf("%d",&n);

    printf("\nEnter the array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nArray elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }

    printf("\n\nEnter postion of new element : ");
    scanf("%d",&pos);
    printf("\nEnter new element : ");
    scanf("%d",&newele);

    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=newele;

    printf("\n\nUpdated array elements : \n");
    for(int i=0;i<=n;i++)
    {
        printf("%d   ",arr[i]);
    }

    return 0;
}
