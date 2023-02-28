/*Using pointers, write a function that receives a character string and a character as
arguments and deletes all occurrence of this character in the string. The function should return the
corrected string with no holes.*/
#include"stdio.h"
#include"conio.h"
char *occurence(char [],char);
void main()
{

     char str[30];
    puts("Enter something:\n");
    gets(str);
    char c;
    puts("Enter character to be deleted from the string:\n");
    scanf("%c",&c);
    char* rec;
    rec=occurence(str,c);
   printf("%s",rec);
    getch();
}
char *occurence(char str[],char ch)
{
    int i,j,k;
  for(k=0;str[k]!='\0';k++)
  {
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {

            for(j=i;str[j]!='\0';j++)
            {

                str[j]=str[j+1];
            }
        }
    }
  }

    return str;
}

