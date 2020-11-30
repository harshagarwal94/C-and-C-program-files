#include<stdio.h>
void main()
{
    int a,s=0,x,i;
    printf("plz enter the no to be tested");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        x=i%10;
        s=s+x*x*x;
    }
    if(a==s)
    {
        printf("the value is palendrom");

    }
    else
    {
        printf("the value is not the paliendrom");
    }
}
