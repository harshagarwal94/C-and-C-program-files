#include<stdio.h>
void main()
{
    int r,h;
    float v;
    printf("please enter the value of radius\n");
    scanf("%d",&r);
    printf("please enter the value of height\n");
    scanf("%d",&h);
    v=0.33*3.14*r*r*h;
    printf("the value is %0.1f",v);
}
