#include<stdio.h>

main()
{
    int b,h;
    float a;
    printf("Enter the length and height of triangle: ");
    scanf("%d%d",&b,&h);

    a=0.5*b*h;

    printf("Area=%f ",a);



    return 0;
}
