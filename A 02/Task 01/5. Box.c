#include<stdio.h>

main()
{
    int t,j,n,i,k;
    printf("How many squares do you want: ");
    scanf("%d",&t);

    for(k=1; k<=t; k++)
    {
        printf("Enter the length of square: ");

        scanf("%d",&n);

        for(j=1; j<=n; j++)
        {

            for(i=1; i<=n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
