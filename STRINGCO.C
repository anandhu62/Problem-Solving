#include<stdio.h>
#include<conio.h>

int main()
{
 char str1[100],str2[100];
 clrscr();

 printf("Enter the first sting:");
 gets(str1);

 printf("Enter the second string:");
 gets(str2);

 if(strcmp(str1,str2)==0)
 {
  printf("Both the strings are equal");
 }
 else
 {
  printf("Strings are not equal");
 }
 getch();
 return 0;
}