#include<stdio.h>
int main() 
{
int a,d,n,i;
   printf("Enter the number of the A.P. series: ");
  scanf("%d%d%d",&a,&n,&d);
    i=(n *(2*a +(n-1)*d))/2;
    printf("Sum of the series A.P.:%d ",i);
   return 0;
 }
