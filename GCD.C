#include<stdio.h>
#include<conio.h>

int gcd(int a,int b)
{
 int i,g;
 for(i=1;i<=a&&i<=b;i++)
 {
  if(a%i==0 && b%i==0)
  {
   g=i;
  }
 }
 return g;
}

int main()
{
 int x,y,g,l;
 clrscr();
 printf("Enter first numbers:");
 scanf("%d",&x);
 printf("Enter second number:");
 scanf("%d",&y);
 g=gcd(x,y);
 l=(x*y)/g;
 printf("GCD of the given two numbers is %d",g);
 printf("\nLCM of the given two number is %d",l);
 getch();
 return 0;
}