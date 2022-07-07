#include<stdio.h>

main()
{
    int a;
    printf("Input an integer: ");
    scanf("%d",&a);

    if((a%2) != 0)
        printf("Odd\n");

    else
        printf("Even\n");

    return 0;
}
