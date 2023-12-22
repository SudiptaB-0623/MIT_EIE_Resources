/*Convert the given temperature in Fahrenheit to Centigrade*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int f,c;
    printf("Enter temperature in Fahrenheit : \n");
    scanf("%d",&f);

    c=(5.0/9.0)*(f-32.0);
    printf("\nTemperature in Centigrade : %d",c);
    return 0;
}
