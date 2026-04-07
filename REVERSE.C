#include<stdio.h>
#include<conio.h>

int main()
{
 int n,arr[100],i,temp;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n/2;i++)
 {
  temp=arr[i];
  arr[i]=arr[n-i-1];
  arr[n-i-1]=temp;
 }
 printf("The reversed array:");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
 return 0;
}