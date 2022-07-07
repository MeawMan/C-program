#include <stdio.h>
#include<string.h>

void convert(char*);
int main()
{
    char s[100];
    int i;

    printf("Enter the string: ");
    scanf("%[^\n]",&s);

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string:%d\n", i);

    convert(s);
    printf("\nReverse case: %s\n",s);

    printf("Lowercase: %s\n",strlwr(s));
    printf("Uppercase: %s\n",strupr(s));

    return 0;
}

void convert(char *p)
{
    while(*p!='\0')
    {
        if(*p>=65&&*p<=90)
            *p=*p+32;
        else
            if(*p>=97&&*p<=122)
            *p=*p-32;
        p++;
    }
}

