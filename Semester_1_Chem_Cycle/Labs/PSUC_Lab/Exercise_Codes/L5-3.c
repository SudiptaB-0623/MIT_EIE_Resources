/*Arrange the given elements in a 1D array in ascending and descending order using
bubble sort method & selection sort respectively*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num;
    char chr;

    printf("\nEnter number of elements : ");
    scanf("%d",&num);

    int ele[num];
    printf("\nEnter the elements : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&ele[i]);
    }

    printf("\nSorting elements......  \nEnter 'a' for ascending order or 'd' for descending order : ");
    scanf("\n%c",&chr);

    switch(chr)
    {
        case 'a':   // bubble sorting procedure
                    for(int i=0; i<num-1; i++)         //pass
                    {
                        for(int j=0; j<num-i-1; j++)
                        {
                            if(ele[j] > ele[j+1]) // comparison
                            {
                                // interchange
                                int temp = ele[j];
                                ele[j] = ele[j+1];
                                ele[j+1] = temp;

                            }
                        }
                    }
                    printf("\nElements in ascending order : \n");
                    for(int i=0;i<num;i++)
                    {
                        printf("%d   ",ele[i]);

                    }
                    break;

        case 'd':   // selection sorting procedure
                    for(int i = 0; i < num-1; i++)            // loop for number of pass
                    {
                         int pos = i, small = ele[i];
                         for(int j=i+1; j<num; j++)          //loop for searching the smallest
                         {
                              if(small > ele[j])         // finding the smallest
                              {
                                   pos = j;           // pos for interchanging
                                   small = ele[j];         // assigning current small value
                              }
                         }
                         ele[pos] = ele[i];                 //interchanging values
                         ele[i] = small;
                    }
                    printf("\nElements in descending order : \n");
                    for(int i=num-1;i>=0;i--)
                    {
                        printf("%d   ",ele[i]);
                    }
                    break;
        default:
                    printf("\nInvalid input !!!");
                    break;
    }



    return 0;
}
