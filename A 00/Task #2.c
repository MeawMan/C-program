#include<stdio.h>

main()
{
    int age,reg;
    float h,w;
    char Name[10],village[10];

    printf("Your name and Village? \n");
    scanf("%s%s",&Name,&village);

    printf("Your Reg no? \n");
    scanf("%d",&reg);
    printf("Your Age?\n");
    scanf("%d",&age);

    printf("Your hight and weight?\n");
    scanf("%f%f",&h,&w);

    printf("Name:%s \nReg:%d \nAge:%d years \nHight:%f ft \nWeight:%f KG \nVillage:%s",Name,reg,age,h,w,village);
    return 0;
}
