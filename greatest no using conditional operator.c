#include<stdio.h>
void main ()
{
    int a,b,c,d;
    printf("please enter the value of the no to be checked");
    scanf("%d%d%d",&a,&b,&c);
    d=a>b?(a>c?a:c):(b>c?b:c);
    printf("greatest no %d",d);

}
