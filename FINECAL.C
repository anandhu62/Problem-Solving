#include<stdio.h>
#include<conio.h>

int fineCalc(int days)
{
 int totalfine;
 if(days>5)
 {
  totalfine=days;
 }
 else if(days>=5 && days<=10)
 {
  totalfine=5+((days-5)*2);
 }
 else
 {
  totalfine=15+((days-10)*5);
 }
 return totalfine;
}
int main()
{
 int days,fine;
 printf("Enter the number of delayed days:");
 scanf("%d",&days);
 fine=fineCalc(days);
 printf("The total fine is %d",fine);
 getch();
 return 0;
}