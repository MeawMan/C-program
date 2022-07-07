#include<stdio.h>

main()
{
    int a,b,c;

    printf("Input three value: ");
    scanf("%d%d%d",&a,&b,&c);


    if(a>b&&a>c)
    {
        if(b>c)
        {
        }
        else
        {
            c=b;
        }
    }
    else if(b>c)
    {
        if(a>c)
        {
            a=b;
        }
        else
        {
            c=a;
            a=b;
        }
    }
    else
    {
        if(b>a)
        {
          b=a;
          a=c;
          c=b;
        }
        else
        {
            a=c;
            c=b;
        }
    }
    printf("Max=%d\nMin=%d",a,c);
    return 0;
}
