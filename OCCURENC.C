#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[100],freq[100];
 int i,n,j,count;
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);

 printf("Enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
  freq[i]=-1;
 }
 for(i=0;i<n;i++)
 {
  count=1;
  if(freq[i]!=0)
  {
   for(j=i+1;j<n;j++)
   {
    if(arr[i]==arr[j])
    {
     count++;
     freq[j]=0;
    }
   }
   freq[i]=count;
  }
 }
 printf("Frequency of elements:\n");
 for(i=0;i<n;i++)
 {
  if(freq[i]!=0)
  {
   printf("%d occurs %d times\n",arr[i],freq[i]);
  }
 }
 getch();
 return 0;
}
