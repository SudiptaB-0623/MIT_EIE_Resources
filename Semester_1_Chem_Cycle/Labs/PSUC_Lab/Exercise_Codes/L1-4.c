/*Write a C program to display the size of the data type int, char, float, double, long
int and long double using size of ( ) operator */

#include<stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    int a;
    float b;
    double c;
    char d;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu byte\n", sizeof(d));

    return 0;
}
