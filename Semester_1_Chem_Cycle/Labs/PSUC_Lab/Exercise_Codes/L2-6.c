/*Find the smallest among three numbers using conditional operator*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int a,b,c,min;
    printf("\nEnter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    min=((a<b)?a:b);
    min=min<c?min:c;

    printf("\nThe smallest number is %d",min);

    return 0;
}
