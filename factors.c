#include<stdio.h>
#include<conio.h>

int main()
{
 int n,i;
 clrscr();

 printf("Enter the number to find the factors:");
 scanf("%d",&n);

 printf("The factors of the given number are as follows:\n");
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   printf("%d,",i);
  }
 }
 getch();
 return 0;
}
