#include<stdio.h>
#include<conio.h>

float farhenheit()
{
 float temp;
 printf("Enter the temperature in degree celsius:");
 scanf("%f",&temp);
 return (temp*9/5)+32;
}
float celsius()
{
 float temp;
 printf("Enter the temperature in farhenheit:");
 scanf("%f",&temp);
 return (temp-32)*5/9;
}
int main()
{
 float res;
 int choice;
 printf("Choose the type conversio:\n 1 for celsius\n 2 for farhenheit");
 scanf("%d",&choice);
 if(choice==1)
 {
  res=celsius();
 }
 else
 {
  res=farhenheit();
 }
 printf("The converted temp is %.2f",res);
 getch();
 return 0;
}