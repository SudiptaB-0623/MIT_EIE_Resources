/*Find the largest and smallest element in a 1D array*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int n,small,large;

    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter the elements : ");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
            small=arr[i];
        if(arr[i]>large)
            large=arr[i];
    }

    printf("\nLargest element : %d",large);
    printf("\nSmallest element : %d",small);

    return 0;
}
