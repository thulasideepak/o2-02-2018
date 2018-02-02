#include<stdio.h>
int main()
{
int i,j,b[100],n,temp;
printf("enter no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
printf("\n array elements are %d",a[i]);
}
  for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;}}}
 printf("the sorted array is: %d",temp);
return 0;
}
