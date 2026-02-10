#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,n;
 printf("Enter the size of the pyramid:");
 scanf("%d",&n);

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
