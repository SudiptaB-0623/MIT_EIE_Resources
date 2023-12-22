/*Print all the prime numbers in a given 1D array*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int n;

    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter the elements : ");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }

    printf("\nPrime numbers in the entered array are : \n ");
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
            printf("%d  ",arr[i]);
    }

    return 0;
}
