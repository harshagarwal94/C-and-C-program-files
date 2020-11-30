#include<stdio.h>
void main ()
{
    int n,a=0,s,i,c;
    printf("please enter the no of  subject\n");
    scanf("%d",&n);
    printf("please enter the marks");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
      a=a+s;
    }
    c=a/n;
    printf("the average is %d and the grade is ",c);
    if(c>=90)
    {
        printf("A");
    }
    else if(c>=80)
    {
        printf("B");
    }
    else if(c>=70)
    {
        printf("C");
    }
    else if(c>=60)
    {
        printf("D");
    }
    else if(c>=50)
    {
        printf("E");
    }
    else
    {
        printf("fail");
    }
}
