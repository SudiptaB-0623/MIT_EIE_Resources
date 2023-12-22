/* Arrange ‘n’ names in alphabetical order*/

#include<stdio.h>
#include<string.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    char arr[20][20],temp[20];
    int n;

    printf("\nEnter number of names (Max.- 19) : ");
    scanf("%d",&n);

    printf("\nEnter the names: \n");
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        gets(arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("\nThe sorted array is:\n ");
    for(int i=0;i<n;i++)
    {
        puts(arr[i]);
    }


    return 0;
}
