/*Count the number of words in a sentence*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    char str[100];
    int word=1;

    printf("\nEnter a string (Max. 80 characters) : ");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
            word++;
    }

    printf("Number of words : %d",word);


    return 0;
}
