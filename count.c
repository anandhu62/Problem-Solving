#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,count=0;
 clrscr();

 for(i=1;i<=3;i++)
 {
  for(j=1;j<=3;j++)
  {
   count++;
  }
 }
 printf("The count of the given loop is %d",count);
 getch();
 return 0;
}
