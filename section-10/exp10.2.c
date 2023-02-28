/* program that take a string and convert all lowercase letter to its uppercase letter*/
#include<stdio.h>
#include<conio.h>

char StringConvert(char str[]);
void main()
{
    int a;
    char str[50];
    printf("enter string \n :");
    gets(str);
    StringConvert(str);
}
char StringConvert(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97||str[i]<=122)
        {
            str[i]=str[i]-32;
            printf("%c",str[i]);
        }
    }
}
