#include<stdio.h>
#include<conio.h>

int main()
{
 int n,i,arr[100];
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=1;i<n;i++)
 {
  arr[i]=arr[i]+arr[i-1];
 }
 printf("The modified array:");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
 return 0;
}