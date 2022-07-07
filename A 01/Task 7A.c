#include <stdio.h>
#include<math.h>

int main()
{
    double a,b,c,dis,r1,r2,x,y;
    printf("Enter coefficients a,b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    dis= b * b - 4 * a * c;

    if(dis>0)
        {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("root1= %.2lf and root2= %.2lf",r1,r2);
    }
    else if(dis==0)
        {
        r1=r2=-b/(2*a);
        printf("root1= root2= %.2lf;",r1);
    }
    else
        {
        x=-b/(2*a);
        y=sqrt(-dis)/(2 * a);
        printf("root1= %.2lf+%.2lfi and root2= %.2f-%.2fi", x,y,x,y);
    }

    return 0;
}
