/*Input radius to find the volume and surface area of a sphere */

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int rad,vol,sa;
    printf("\nEnter the radius : \n");
    scanf("%d",&rad);

    vol=4*3.14*rad*rad*rad;
    sa=4*3.14*rad*rad;

    printf("\nVolume = %d \nSurface Area = %d",vol,sa);
    return 0;
}
