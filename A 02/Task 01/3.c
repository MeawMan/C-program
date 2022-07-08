#include<stdio.h>

main()
{
    for(int i=1000; i>=1; i--)
        printf("%c%d", (i%5) ? '\t' : '\n', i);
    return 0;

}
