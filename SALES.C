#include<stdio.h>
#include<conio.h>

int main()
{
 int i,n,day[100],cat1[50],cat2[50],cat3[50],cat4[50],cat5[50];
 int c1=0,c2=0,c3=0,c4=0,c5=0;

 printf("Enter the number of days sales done:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter sales for day %d:",i+1);
  scanf("%d",&day[i]);

  if(day[i]==1)
  {
   cat1[c1]=day[i];
   c1++;
  }
  if(day[i]==2)
  {
   cat2[c2]=day[i];
   c2++;
  }
  if(day[i]==3)
  {
   cat3[c3]=day[i];
   c3++;
  }
  if(day[i]==4)
  {
   cat4[c4]=day[i];
   c4++;
  }
  if(day[i]==5)
  {
   cat5[c5]=day[i];
   c5++;
  }
 }
 printf("Sales Histogram");
 printf("\n 1 ");
 for(i=0;i<c1;i++)
 {
  printf("*-*");
 }
 printf("\n 2");
 for(i=0;i<c2;i++)
 {
  printf("*-*");
 }
 printf("\n 3");
 for(i=0;i<c3;i++)
 {
  printf("*-*");
 }
 printf("\n 4");
 for(i=0;i<c4;i++)
 {
  printf("*-*");
 }
 printf("\n 5");
 for(i=0;i<c5;i++)
 {
  printf("*-*");
 }
 getch();
 return 0;
}

