#include<stdio.h>
int main()
{
    int rows, i, spaces, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n");

    for(i = rows; i >= 1; i = i-1)
    {
        for(spaces = 1; spaces <= rows-i; spaces = spaces+1)
            printf("  ");

        for(columns = 1; columns <= (i*2)-1; columns = columns+1)
            printf("* ");

        printf("\n");
    }

    return 0;
}
