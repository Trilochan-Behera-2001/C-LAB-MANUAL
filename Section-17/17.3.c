/*Write a program that takes a line of text from command line and prints characters present in the line in alphabetical order. For example, if we type the line of text “India is my country” on command line the output should be “acdIiimnnorstuyy”. */
#include <stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
    char temp;
    char str[1000]="";
    for (int i = 3; i <argc; i++)
    {

        strcat(str,argv[i]);
    }

    puts(str);
}

