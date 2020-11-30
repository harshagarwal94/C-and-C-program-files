#include<stdio.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("plz enter the no upto which you want to extent the series");
    scanf("%d",&n);
    printf("0\n1\n");
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
