#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j, mid;
    clrscr();

    printf("Enter the size (odd): ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Please enter an odd number");
        getch();
        return 0;
    }

    mid = n / 2;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(
                (j == 0 && i <= mid) ||
                (i == 0 && j >= mid) ||
		(i == mid) ||
		(i == 0  ) ||
                (j == mid && i > mid) ||
		(j == n-1 && i >= mid) ||
                (i == n-1 && j < mid)
              )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
