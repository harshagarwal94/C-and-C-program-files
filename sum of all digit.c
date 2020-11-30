#include<stdio.h>
void main()
{
    int a,s=0,x,i;
    printf("please enter the value to be checked");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
        {
        x=i%10;
        s=s+x;
        }
    printf("the sum is %d",s);

}
