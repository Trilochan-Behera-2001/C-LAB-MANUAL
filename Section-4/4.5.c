/*An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
consumer and the number of units consumed and print the charge with his/her name*/
#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
#define METER_CHARGE 100
void main()
{
    float units,charge=0,totalAmount=0,subCharge=0;
    char name[20];


    printf("\n This program read the Consumer Name, Number Of Units Consumed Print the Charge with his/her Name ");
    printf("\n Enter The Consumer Name :");
    scanf("%[^\n]",name);
    printf("\n Please Enter Number of Units Consumed by You :");
    scanf("%f",&units);
    if(units>0 && units <=200)
    {
        charge=(float)0.80*units;
    }
    else if(units>200 && units <=300)
    {
        charge=(float)1.30*(units-200)+160.0;
    }
    else
    {
        charge=(float) 2.00*(units-300)+160.0+130.0;
    }
    totalAmount=(float)charge+METER_CHARGE;
    if(totalAmount>400)
    {
        subCharge= (totalAmount*15)/100;
        totalAmount=(float)charge+METER_CHARGE+subCharge;
    }

    printf("\n \t\t %s You Consume %g units , So Your BillAmount is :%g",name,units,totalAmount);
}
