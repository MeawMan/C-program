#include<stdio.h>

main()
{
    int n,i;
    int sum=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i*i;
    }
    printf("Sum of the series: %d",sum);

    return 0;
}
