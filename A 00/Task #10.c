#include <stdio.h>

int main()
{
    int a1,a2,a3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d",&a1,&a2,&a3);

    if((a1+a2)>a3)
    {
        if((a2+a3)>a1)
        {
            if((a1+a3)>a2)
            {
                printf("Triangle is valid");
            }
            else
            {
                printf("Triangle is not valid");
            }
        }
        else
        {
            printf("Triangle is not valid");
        }
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}
