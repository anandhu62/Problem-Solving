#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void validation()
{
 char password[100];
 printf("Enter the password:");
 scanf("%s",&password);
 if(strlen(password)>=8)
 {
  printf("The password is valid");
 }
 else
 {
  printf("The password is not valid");
 }
}

int main()
{
 clrscr();
 validation();
 getch();
 return 0;
}