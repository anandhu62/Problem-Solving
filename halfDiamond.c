#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,n;
 printf("Enter the size of the diamond:");
 scanf("%d",&n);
 clrscr();

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("*");
  }
  printf("\n");
 }
 for(i=n;i>0;i--)
 {
  for(j=i;j>0;j--)
  {
   printf("*");
  }
  printf("\n");
 }
 getch();
 return 0;
}
