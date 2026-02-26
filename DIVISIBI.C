#include<stdio.h>
#include<conio.h>

void divis(int x)
{
 if(x%3==0&&x%7==0)
 {
  printf("The given number is divisble by both 3 and 7");
 }
 else if(x%3==0&&x%7!=0)
 {
  printf("The given number is divisible by 3 but not by 7");
 }
 else if(x%3!=0&&x%7==0)
 {
  printf("The given number is divisible by 7 but not by 3");
 }
 else
 {
  printf("The given number is not divisible by 3 and 7");
 }
}
int main()
{
 int a;
 clrscr();
 printf("Enter any random number:");
 scanf("%d",&a);
 divis(a);
 getch();
 return 0;
}