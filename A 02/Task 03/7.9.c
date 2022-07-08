#include<stdio.h>

int maximum(int x, int y)
{
    int z;
    z=(x>=y)?x:y;
    return(z);
}

main()
{
    int a,b,c,d;

    printf("\na= ");
    scanf("%d",&a);
    printf("\nb= ");
    scanf("%d",&b);
    printf("\nc= ");
    scanf("%d",&c);

    d=maximum(a,b);
    printf("\n\nmaximum= %d", maximum(c,d));

}
