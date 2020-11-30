#include<stdio.h>
int main()
{
    int i,a[2],b[2],c = 0,d =0;
    for(i=0; i<=2; i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    for(i=0; i<=2; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<=2; i++)
    {
        printf("%d",a[i]);

    }
    for(i=0; i<=2; i++)
    {
        printf("%d",b[i]);

    }
    for(i=0; i<=2; i++)
    {
       // if((a[i] >= 1 && a[i] <= 100) && (b[i] >= 1 && b[i] <= 100))
        //{
            if(a[i] > b[i])
           {
            c = c + 1;
            d = d + 0;
           }
           else if(a[i] < b[i])
           {
            c += 0;
            d += 1;
           }
           else if(a[i] == b[i])
           {
           c = c + 0;
           d = d + 0;
           }
           else
           {
               printf("wrong choice");
           }
       // }
      //  else
       // {
       //     printf("wrong choice");
        //}

    }
    printf("%d %d", c,d);
    return 0;

}
