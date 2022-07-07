#include <stdio.h>

int main()
{
    int a;
	printf("Input an integer: ");
	scanf("%d",&a);


	   if(a==0)
        {
			printf("Positive\n");
		}
		else if(a<0)
		{
		    if((a%2) != 0)
			printf("Negative Odd\n");
            else
			printf("Negative Even\n");
		}
		else
		{
		    if((a%2) != 0)
			printf("Positive Odd\n");
		    else
			printf("Positive Even\n");
		}

	return 0;
}
