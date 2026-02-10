#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,k,n;
 clrscr();
 printf("Enter the size of the pyramid:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(k=1;k<=n-i;k++)
  {
   printf(" ");
  }
  for(j=1;j<=i*2-1;j++)
  {
   printf("*");
  }
  printf("\n");
 }
 getch();
 return 0;
}
