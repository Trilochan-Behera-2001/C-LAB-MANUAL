/*find whether the Character is Vowel or Consonant*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n This program illustrate that whether the character is Vowel or Consonant");
    printf("\n Enter a Character for Check Whether it is Vowel or Consonant :");
    scanf("%c",&ch);
    ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='u'||ch=='U' ? printf("\n Character is Vowel") : printf("\n Character is Consonant");
    getch();
}
