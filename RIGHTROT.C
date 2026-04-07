#include<stdio.h>
#include<conio.h>

void rightRotation(int arr[],int n,int d)
{
 int temp[100],i;
 d=d%n;
 for(i=0;i<d;i++)
 {
  temp[i]=arr[d];
 }
 for(i=n-1;i>d;i--)
 {
  arr[i]=arr[i-d];
 }
 for(i=0;i<d;i++)
 {
  arr[i]=temp[i];
 }
 printf("The array after right rotation:");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}

int main()
{
 int arr[100],n,k,i;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the number of positions to rotate:");
 scanf("%d",&k);
 rightRotation(arr,n,k);
 getch();
 return 0;
}