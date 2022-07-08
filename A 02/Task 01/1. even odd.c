#include<stdio.h>

main()
{
    int t,i,n;
    printf("How many numbers do you have: ");
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        printf("Number %d: ",i);
        scanf("%d",&n);
        if(n%2==0)
            printf("%d is Even\n",n);
        else
            printf("%d is Odd\n",n);
    }
    return 0;

}
