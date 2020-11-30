#include<stdio.h>
int main()
{
    int a,b,substract;
    printf("enter the values of the following \n now enter the value of the first no");
    scanf("%d",&a);
    printf("enter the value of the second no");
    scanf("%d",&b);
    if(a>b);
    {substract=a-b;
    printf("the value is%d",substract);
    }
    else
    {
    substract=b-a;
    printf("the value is%d",substract);
    }
    return 0;
}
