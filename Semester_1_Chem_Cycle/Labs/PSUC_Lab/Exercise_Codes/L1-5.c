/*Input P, N and R to compute simple and compound interest.*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int p,n,r;
    float si,ci;

    printf("Enter P , N , R : \n");
    scanf("%d%d%d",&p,&n,&r);

    si=(p*n*r)/100;
    ci=(p*(pow(((1+r)/100),n)))-p;

    printf("\n Simple Interest = %f",si);
    printf("\n Compound Interest = %f",ci);
    return 0;
}
