/* Write a program to read ‘n’ characters and then delete the duplicate characters*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    char ch[100];
    printf("Enter something\n");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        for(j=i+1;ch[j]!='\0';j++)
     {
            if(ch[i]==ch[j])
        {
            for(k=j;ch[k]!='\0';k++)
            {
                ch[k]=ch[k+1];
            }
        }
     }
    }
    printf("\n printing final string after removing all duplicates :%s",ch);
    getch();
}
