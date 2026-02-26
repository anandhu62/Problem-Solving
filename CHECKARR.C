#include<stdio.h>
#include<conio.h>

void largest(int arr[],int n)
{
 int l=arr[0];
 int i;
 for(i=1;i<n;i++)
 {
  if(l<arr[i])
  {
   l=arr[i];
  }
 }
 printf("The largest element of the given array is %d",l);
}
void slargest(int arr[],int n)
{
 int l=arr[0],sl=arr[1];
 int i;
 if(arr[0]<arr[1])
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
 printf("The second largest element of the given array is %d",sl);
}
void sortcheck(int arr[],int n)
{
 int i,flag=1,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(arr[j]<arr[j+1])
   {
    flag=0;
   }
  }
 }
 if(flag==1)
 {
  printf("The array is not sorted");
 }
 else
 {
  printf("The array is sorted");
 }
}
void dupcheck(int arr[],int n)
{
 int i,j,k;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[i]==arr[j])
   {
    for(k=j;k<n-1;k++)
    {
     arr[k]=arr[k+1];
    }
    n--;
    j--;
   }
  }
 }
 printf("The array after removing duplicates\n");
 for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }
}


int main()
{
 int n,i,a[100];
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 largest(a,n);
 slargest(a,n);
 sortcheck(a,n);
 getch();
 return 0;
}