/*here this program is convert a price in decimal form into its respective paisa*/
#include<Stdio.h>
#include<conio.h>
void main()
{
    float rup;
    int paisa;
    printf("\n Here this program is convert a price in decimal form into its respective paisa");
    printf("\n Enter price of an Item in Decimal form :");
    scanf("%f",&rup);
    paisa=rup*100;
    printf("\n Price of the item in Paisa is :%d",paisa);
    getch();
}
