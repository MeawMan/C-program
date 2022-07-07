#include<stdio.h>

int n;
int series(n)
{
    int total1, total2;

    total1 = (n+1)/2;   //If 'n' is odd.
    total2 = (-1)*(n/2);    //If 'n' is even.

    if (n%2 != 0)
        return total1;

    else
        return total2;
}


int main()
{
    int a;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &a);

    printf("\nThe total is: %d\n", series(a));

    return 0;
}
