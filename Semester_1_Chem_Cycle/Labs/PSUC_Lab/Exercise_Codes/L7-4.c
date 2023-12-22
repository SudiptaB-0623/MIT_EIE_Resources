/*Write a function Largest to find the maximum of a given list of numbers. Also write a main program to read N numbers and
find the largest among them using this function.*/

#include<stdio.h>

void Largest(int array[],int n)
{
    printf("\n\t\tFunction executed \n");

    int max=array[0];
    for(int i=1;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }

    printf("\nThe largest number is %d",max);
}

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num;
    printf("\nEnter number of elements : ");
    scanf("%d",&num);

    int arr[num];
    printf("\nEnter the array elements : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    Largest(arr,num);

    return 0;
}
