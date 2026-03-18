#include<stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
 char string[100];
 int num;
 clrscr();
 fp=fopen("file3.txt","w");
 printf("Enter a string:");
 scanf("%s",string);
 fputs(string,fp);
 printf("Enter a number:");
 scanf("%d",&num);
 putw(num,fp);
 printf("File added successfully to the file");
 fclose(fp);
 getch();
 return 0;
}