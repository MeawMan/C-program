#include<stdio.h>

main()
{
    int a1,a2,a3,a4,a5;
    float avg;
    printf("Enter five integer number: ");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);

    avg=(a1+a2+a3+a4+a5)/5;

    printf("Average= %f",avg);
    return 0;
}
