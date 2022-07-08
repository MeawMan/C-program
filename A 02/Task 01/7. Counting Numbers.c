#include<stdio.h>
#include<stdlib.h>

int main()
{
    char L[100000];
    printf("Enter your line: ");
    scanf("%[^\n]", L);
    char *p, *e;
    long input;
    int count=0;
    p=L;

    for(p=L; ;p=e)
    {
        input=strtol(p,&e,10);
        if(p==e)
        {
            break;
        }
        count++;
    }
    printf("Number of numbers: %d\n",count);

    return 0;
}
