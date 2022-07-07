#include<stdio.h>

main()
{
    int i;

    i=100;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }
    printf("\n");

    i=100;
    do
    {
        printf("%d ",i);
        i--;
    }while(i>=1);
    printf("\n");

    for(i=100;i>=1;i--)
    {
        printf("%d ",i);
    }

    return 0;
}

