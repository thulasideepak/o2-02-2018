#include<stdio.h>
int main()
{
int i,j,a[100],n,temp;
printf("enter no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n array elements are %d",a[i]);
}
  for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
 printf("the sorted array is: %d",temp);
return 0;
}
