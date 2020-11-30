#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("please enter 3 no to check");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is the smallest",a);
    }
    else if(b<a&&b<c)
    {
        printf("%d is the smallest ",b);
    }
    else
    {
        printf("%d is the smallest",c);
    }
}
