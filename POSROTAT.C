#include<stdio.h>
#include<conio.h>

void leftRotation(int arr[],int n,int d)
{
 int temp[100];
 int i;
 for(i=0;i<d;i++)
 {
  temp[i]=arr[i];
 }
 for(i=d;i<n;i++)
 {
  arr[i-d]=arr[i];
 }
 for(i=0;i<d;i++)
 {
  arr[n-d+i]=temp[i];
 }
 printf("Rotated array by given pos:");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}

int main()
{
 int arr[100],n,i,d;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the positions to rotate:");
 scanf("%d ",&d);
 leftRotation(arr,n,d);
 getch();
 return 0;
}
