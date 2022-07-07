#include<stdio.h>

main()
{
    int i;

    i=1;
    while(i<=100)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");

    i=1;
    do
    {
        printf("%d ",i);
        i++;
    }while(i<=100);
    printf("\n");

    for(i=1;i<=100;i++)
    {
        printf("%d ",i);
    }

    return 0;
}
