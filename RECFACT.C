#include<stdio.h>
#include<conio.h>

int fact(int n)
{
 if(n==0||n==1)
 {
  return 1;
 }
 else
 {
  return n*fact(n-1);
 }
}
int main()
{
 int i,res;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&i);
 res=fact(i);
 printf("The factorial of given number is %d",res);
 getch();
 return 0;
}
