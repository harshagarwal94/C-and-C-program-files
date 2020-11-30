#include<stdio.h>

int SimpleArraySum()
{
        int i,n,sum=0;
        int ar[1000];
     printf("plz enter the no of integers you want to enter but plz do not enter the no greater than 1000\n");
     scanf("%d",&n);
     if(n>1000|| i<0){
        printf("you entered the no greater than 1000 or i is -ve");
     }
     else{
     printf("\n thanks for writing the no of integers \n Now enter the values you want to add: ");
    for(i=0; i<n; i++){
    scanf("%d",&ar[i]);
    }
     for(i=0; i<n; i++)
     {
         sum = sum + ar[i];
     }
     printf("sum of the array is %d",sum);

     }
return 0;
}
int main()
{
    SimpleArraySum();
return 0;
}


