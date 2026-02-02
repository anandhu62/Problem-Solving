#include<stdio.h>
#include<conio.h>

int main()
{
 int face,opp;
 clrscr();
 printf("Enter the face value(1 to 6):");
 scanf("%d",&face);

 if(face>6||face<1)
 {
  printf("Ivalid value!Enter value between 1 to 6");
 }
 else
 {
 opp=7-face;
 printf("\nThe opposite value of the given face value is %d",opp);
 }
 getch();
 return 0;
}
