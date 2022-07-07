#include <stdio.h>

int main()
{
    int a,b,c,max;

    printf("Enter maximum value: ");
    scanf("%d", &max);

    printf("Fibonacci terms: \n");
    b = 1;
    c = 0;
    while(c <=max)
    {
        printf("%d ",c);
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
