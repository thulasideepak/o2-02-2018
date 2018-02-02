#include<stdio.h>
int main()
{
int n,b[100],i,j;
float median;
printf("\n enter the num:");
scanf("%d",&n);
for(i=1;i<n-1;i++)
for(j=1;j<n-i;j++)
t=b[j];
b[j]=a[j+1];
b[j+1]=t;
if(b[i]%2==0)
{
median=(b(n/2)+a(n/2+1))/2;
else
median=b(n/2+1);
}
printf("\n median",b[i]);
return 0;
}
