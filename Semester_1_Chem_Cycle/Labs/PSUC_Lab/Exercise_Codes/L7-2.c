/*Input a string and toggle the case of every character in the input string*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    char str[100];

    printf("\nEnter a string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
        else if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
    }

    printf("\nModified string: ");
    puts(str);

    return 0;
}
