#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,gap,n,a[100],t=0,temp;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter the element for position %d:",i);
  scanf("%d",&a[i]);
 }
 for(gap=n/2;gap>0;gap/=2)
 {
   t=t+3;
   for(i=gap;i<n;i++)
   {
    t=t+3;
    temp=a[i];
    t=t+1;
    for(j=i;j>=gap&&temp<a[j-gap];j-=gap)
    {
     t=t+7;
     a[j]=a[j-gap];
     t=t+2;
    }
    a[j]=temp;
    t=t+1;
   }
 }
 printf("Sorted array:");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 printf("Time complexity is %d",t);
 getch();
 return 0;
}
