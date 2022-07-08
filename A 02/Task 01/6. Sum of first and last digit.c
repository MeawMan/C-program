#include<stdio.h>

main()
{
    int a,b,n,sum;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    a=n%10;
    b=n/10000;
    sum=a+b;
    printf("Sum of first and last digit: %d",sum);

    return 0;
}
