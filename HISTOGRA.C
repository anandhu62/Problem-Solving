#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,marks[100],ran1[50],ran2[50],ran3[50],ran4[50],n;
 int cr1=0,cr2=0,cr3=0,cr4=0;
 clrscr();
 printf("Enter the number of students:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter the mark for roll_no %d:",i+1);
  scanf("%d",&marks[i]);
 }
 for(i=0;i<n;i++)
 {
  if(marks[i]<=40)
  {
   ran1[cr1]=marks[i];
   cr1++;
  }
  else if(marks[i]>=41 && marks[i]<=60)
  {
   ran2[cr2]=marks[i];
   cr2++;
  }
  else if(marks[i]>=61 && marks[i]<=80)
  {
   ran3[cr3]=marks[i];
   cr3++;
  }
  else
  {
   ran4[cr4]=marks[i];
   cr4++;
  }
 }
 printf("Histogram for mark distribution\n");
 printf("0-40:");
 for(i=0;i<cr1;i++)
 {
  printf("*-*");
 }
 printf("\n41-60");
 for(i=0;i<cr2;i++)
 {
  printf("*-*");
 }
 printf("\n61-80:");
 for(i=0;i<cr3;i++)
 {
  printf("*-*");
 }
 printf("\n 81-100");
 for(i=0;i<cr4;i++)
 {
  printf("*-*");
 }
 getch();
 return 0;
}
