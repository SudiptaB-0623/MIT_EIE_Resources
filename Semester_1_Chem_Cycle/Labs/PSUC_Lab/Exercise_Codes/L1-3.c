/*Write a C program to print the ASCII value of a character*/

#include <stdio.h>

int main()
{
    printf("My name is Sudipta Basak\n");

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("\nASCII value of %c = %d", c, c);

    return 0;
}
