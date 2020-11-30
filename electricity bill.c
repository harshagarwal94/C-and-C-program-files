#include<stdio.h>
void main()
{
    int a,z,d,f;
    char user[100];
    printf("please enter the name\n");
    scanf("%s",user);
    printf("\n please enter the no of units\n");
    scanf("%d",&a);
    if(a<=200)
    {
        z=a*0.80+100;
        printf("the total cost is Rs%d ",z);

    }
    else if(a>200&&a<=300)
    {
        z=a*0.90+100;
        printf("the total cost is Rs%d ",z);

    }
    else if(a>300)
    {
        z=a*1+100;
        if(z>400)
        {
            d=z*0.15;
            f=d+z;
        }
        printf("additional surcharge of 15percent  is added and now total cost is %d ",f);

    }
    else
    {
        printf("wrong choice");
    }
}
