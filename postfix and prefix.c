#include<stdio.h>
void main ()
{
    int a=10,b,c=20,d;
    b=a++;
    printf("a=%d",a);
    printf("b=%d",b);
    d=++c;
    printf("c=%d",c);
    printf("d=%d",d);
}
