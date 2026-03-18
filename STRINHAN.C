#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
 char str1[100],str2[100],str3[100];
 int len,cmp;
 clrscr();

 printf("Enter the first string:");
 gets(str1);

 printf("Enter the second string:");
 gets(str2);

 len=strlen(str1);
 printf("\nLength of the entered first string is %d",len);

 strcpy(str3,str1);
 printf("\nAfter strcpy to string 3:\n %s",str3);

 cmp=strcmp(str1,str2);
 printf("\nResult of comparision is %d",cmp);

 cmp=strncmp(str1,str2,3);
 printf("\nResult of strncmp is %d",cmp);

 strupr(str2);
 printf("\nConverted to upper case: %s",str2);

 strlwr(str2);
 printf("\nTo lower case: %s",str2);


 strrev(str2);
 printf("\nReverse of second string is %s",str2);

 if(strchr(str1,'a')!=NULL)
 {
  printf("\n Character 'a' found in string 1");
 }
 else
 {
  printf("\n Character 'a' not found in string 1");
 }
 strcat(str1,"new year");
 printf("Concatenation:%s",str1);
 strncat(str3,"DEFG",2);
 printf("\nIndex concatenation %s",str3);
 getch();
 return 0;
}