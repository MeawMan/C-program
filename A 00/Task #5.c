#include<stdio.h>

main()
{
    int a,b,temp;

    printf("Input two value: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
    }
    else
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("Max=%d\nMin=%d",a,b);
    return 0;
}
