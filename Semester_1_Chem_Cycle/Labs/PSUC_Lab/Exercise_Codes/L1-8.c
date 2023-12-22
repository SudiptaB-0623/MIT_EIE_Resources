/*Write a C program to evaluate the following expression for the values a = 30,b=10, c=5, d=15
(i) (a + b) * c / d (ii) ((a + b) * c) / d
(iii) a + (b * c) / d (iv) (a + b) * (c / d)*/

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");
    int a=30,b=10,c=5,d=15,e,f,g,h;

    e=(a + b) * c / d;
    f=((a + b) * c) / d;
    g= a + (b * c) / d ;
    h=(a + b) * (c / d);

    printf("\n(a+b)*c/d) = %d",e);
    printf("\n((a + b) * c) / d = %d",f);
    printf("\na + (b * c) / d  = %d",g);
    printf("\n(a + b) * (c / d) = %d",h);
    return 0;
}
