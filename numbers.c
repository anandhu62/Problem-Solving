#include<stdio.h>
#include<conio.h>

int main()
{
 int n,m,a,b,q,d1,d2;
 clrscr();

 printf("Enter the first number:");
 scanf("%d",&n);

 printf("Enter the second number:");
 scanf("%d",&m);

 q=n/m;
 a=q*m;
 b=(q+1)*m;
 d1=abs(n-a);
 d2=abs(n-b);

 if(d1<d2)
 {
  printf("The nearest integer is %d",a);
 }
 else if(d1>d2)
 {
  printf("The nearest integer is %d",b);
 }
 else
 {
  if(abs(a)>abs(b))
  {
   printf("The nearest integer is %d",a);
  }
  else
  {
   printf("The nearest integer is %d",b);
  }
 }
 getch();
 return 0;
}
