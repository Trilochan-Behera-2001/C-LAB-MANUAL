
/*Write a program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom"*/
#include"stdio.h"
#include"conio.h"
void main()
{
    char ch[30];
    int n1,n2,i;
    puts("Enter something:\n");
    gets(ch);
    puts("Enter string is:\n");
    puts(ch);
    printf("To print substring of a given string enter starting and ending position:\n");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        printf("%c",ch[i]);
    }
    getch();
}
