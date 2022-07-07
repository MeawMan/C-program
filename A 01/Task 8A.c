#include<stdio.h>

int main()
{
    int i,j,k,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(k=i;k<r;k++)
        {
            printf(" ");
        }
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
