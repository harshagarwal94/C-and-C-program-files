#include<stdio.h>
void main()
{

    int a,i,s=0,x;
    printf("plz enter the value to be tested");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        x=i%10;
        s=s*10+x;
    }
    printf("the value is %d",s);
    if(a==s)
    {
        printf("and it is a paliendrom");
    }
    else
    {
        printf("and it is not a paliendrom");
    }
}
