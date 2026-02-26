#include<stdio.h>
#include<conio.h>

int sumSquare(int n)
{
    int sum = 0, digit;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit;
        n = n / 10;
    }

    return sum;
}

int isHappy(int n)
{
    while(n != 1 && n != 4)
    {
        n = sumSquare(n);
    }

    if(n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isHappy(num))
        printf("It is a Happy Number");
    else
        printf("It is NOT a Happy Number");

    getch();
    return 0;
}