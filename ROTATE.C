#include<stdio.h>
#include<conio.h>
#include<math.h>

int countDigits(int n)
{
 int count=0;
 while(n!=0)
 {
  count++;
  n=n/10;
 }
 return count;
}
int rotate(int n)
{
 int last=n%10;
 int rem=n/10;
 int dig=countDigits(n);
 int rotated=last*pow(10,dig-1)+rem;
 return rotated;
}
int main()
{
 int a,ro;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&a);
 ro=rotate(a);
 printf("The right rotated number is %d",ro);
 getch();
 return 0;
}
