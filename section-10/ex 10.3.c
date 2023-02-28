/*Use recursion function call to evaluate the following series
x - (x^3/3!)+(x^5/5!) - (x^7/7!) + ......*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float series(int x,int n);    //Series Function Declaration
int fact(int x);              //Fact Function declaration
void main()
{
    int x,n;
    float m;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter the number of terms:");
    scanf("%d",&n);
    m=series(x,n);           //call to series function
    printf("sum:%f",m);

}
float series(int x,int n)
{
 float sum=0.0;
  int term=(-1);
    if(n==1)
    {
        return sum+x;
    }
      if(n%2==0)
    {
        return  term* (pow(x,(2*n)-1))/fact((2*n)-1)+series(x,--n);
    }
    else{
        return (term* term)*(pow(x,(2*n)-1))/fact((2*n)-1)+series(x,--n);
    }
}
int  fact(int n)                //fact function definition
{
    if(n==1)
    {
        return 1;
    }
   return n*fact(n-1);
}
