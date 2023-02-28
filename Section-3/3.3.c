/*This program show whether a character is Upper case or Lower case*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n This program show whether a character is Upper case or Lower case ");
    printf("\n Enter a Character for Check Whether it is Upper case or Lower case :");
    scanf("%c",&ch);
    (ch>=65 && ch<=91) ? printf("\n Entered Character is in Upper case ") : printf("\n Entered Character is in Lower case ");
    getch();
}
