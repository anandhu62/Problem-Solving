#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[100],i,j,n,temp;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);

 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 temp=arr[0];
 for(i=1;i<n;i++)
 {
  arr[i-1]=arr[i];
 }
 arr[n-1]=temp;
 printf("\nThe rotated array:");
 for(i=0;i<n;i++)
 {
  printf("%d,",arr[i]);
 }
 getch();
 return 0;
}
