#include<stdio.h>
#include<conio.h>

int main()
{
 int ch;
 int chara=0,words=0,lines=0;
 printf("Enter any text(Press CTRL+D to stop):\n");
 while((ch==getchar())!=EOF)
 {
  chara++;
  if(ch=='\n')
  lines++;
  if(ch==' '||ch=='\n'||ch=='\t')
  words++;
 }
 printf("The number of character in the given text is %d",chara);
 printf("The number of lines in the given text is %d",words);
 printf("The number of lines in the given text is %d",lines);
 getch();
 return 0;
}