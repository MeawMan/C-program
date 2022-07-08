#include<stdio.h>

main()
{
    int t,i;
    char n [101];
    char x;
    printf("How many numbers do you have: ");
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        printf("Number %d: ",i);
        scanf("%s",&n);
        x=n[strlen(n)-1];
        if(x%2==0)
            printf("Number is Even\n");
        else
            printf("Number is Odd\n");
    }
    return 0;

}
