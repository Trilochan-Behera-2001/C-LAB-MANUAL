/*Write a program using Union to read the information for 5 items from the Keyboard and print the same on the Screen.*/
#include"stdio.h"
#include"conio.h"
#define number 5
union item
{
    int itemcode;
    char name[30];
    float price;
};
void main()
{
    int i;
    union item p[number];
    printf("Enter details of 5 item\n");
   for(i=0;i<number;i++)
   {
       printf("Enter item no of %d item",i+1);
       scanf("%d",&p[i].itemcode);
       printf("item no of %d item is %d",i+1,p[i].itemcode);
        printf("Enter name of %d item",i+1);
       scanf("%s",p[i].name);
       printf("item name of %d item is %s",i+1,p[i].name);
       printf("Enter price of %d item",i+1);
       scanf("%f",&p[i].price);
       printf("item price of %d item is %f",i+1,p[i].price);
   }
   getch();
}
