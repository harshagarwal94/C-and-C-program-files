#include<stdio.h>
void main()
{
    int i,a,j;
    printf("plz enter the no of lines for the extention");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
    }
}
