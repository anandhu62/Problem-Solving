#include <stdio.h>
#include <conio.h>

int calculator(int a, int b, char ch)
{
    int r;

    switch(ch)
    {
        case '+': r = a + b;
                  break;

        case '-': r = a - b;
                  break;

        case '*': r = a * b;
                  break;

        case '/':
                  if(b != 0)
                      r = a / b;
                  else
                  {
                      printf("\nDivision by zero error!");
                      r = 0;
                  }
                  break;

        default:
                  printf("\nInvalid operator!");
                  r = 0;
    }

    return r;
}

int main()
{
    int x, y, result;
    char c;

    clrscr();

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &c);   // FIXED

    result = calculator(x, y, c);

    printf("\nThe result is %d", result);

    getch();
    return 0;
}
