#include<stdio.h>
void main()
{
    int a,b,c;
    printf("please enter the value of the first no");
    scanf("%d",&a);
    printf("please enter the value of the second no");
    scanf("%d",&b);
    if(a>b)
    {
    c=a/b;
    printf("the value is %d",c);
    }
    else
    {
        c=b/a;
        printf("the value is %d",c);
    }
}
