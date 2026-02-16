#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,trans[7];
 clrscr();
 for(i=0;i<7;i++)
 {
  printf("Enter the number of transactions for day %d:",i+1);
  scanf("%d",&trans[i]);
 }
 for(i=0;i<7;i++)
 {
  printf("Day %d:",i+1);
  for(j=1;j<=trans[i];j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 getch();
 return 0;
}

