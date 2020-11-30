#include<stdio.h>
void main()
{
    int a,s=0,i,x;
    printf("plz enter the no to be tested");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        x=i%10;
        s=s*10+x;
    }
    printf("the value is %d",s);

}
