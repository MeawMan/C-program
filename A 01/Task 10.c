#include <stdio.h>

main()
{
    int a,i,x=0;
    printf("Input a number: ");
    scanf("%d",&a);

    for(i=2; i<=a/2; i++)
    {
        if(a%i==0)
        {
            x++;
            break;
        }
    }
    if(x==0 && a!= 1)
        printf("%d is a prime number.\n",a);
    else
        printf("%d is not a prime number.",a);

    return 0;
}
