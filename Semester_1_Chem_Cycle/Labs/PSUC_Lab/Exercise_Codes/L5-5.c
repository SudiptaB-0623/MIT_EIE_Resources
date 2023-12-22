/*Search the position of the number that is entered by the user and delete that number from the array and display the resultant array elements*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");


    int arr[100],n,pos,ele,t=0;

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

    printf("\n\nEnter the element to be deleted : ");
    scanf("%d",&ele);

    for(int i=0;i<n-t;i++)
    {
       if(ele==arr[i])
       {
           t++;
           pos=i;
           printf("\nPosition of the element to be deleted : %d",pos+t);
           for(int j=pos;j<n-t;j++)
           {
               arr[j]=arr[j+1];
           }
           i--;
       }
    }

    printf("\n\nResultant array : \n");
    for(int i=0;i<n-t;i++)
    {
        printf("%d   ",arr[i]);
    }

    return 0;
}
