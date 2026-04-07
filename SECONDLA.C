#include<stdio.h>
#include<conio.h>

int main()
{
 int i,n,arr[100],l,sl;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 if(arr[0]>arr[1])
 {
  l=arr[0];
  sl=arr[1];
 }
 else
 {
  l=arr[1];
  sl=arr[0];
 }
 for(i=2;i<n;i++)
 {
  if(arr[i]>l)
  {
   sl=l;
   l=arr[i];
  }
  else if(arr[i]>sl && arr[i]<l)
  {
   sl=arr[i];
  }
 }
 printf("The second largest element in the entered array is %d",sl);
 getch();
 return 0;
}