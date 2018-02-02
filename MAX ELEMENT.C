#include<stdio.h>
int main()
{
int i,j,a[10],t,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",a[i]);
return 0;
}
