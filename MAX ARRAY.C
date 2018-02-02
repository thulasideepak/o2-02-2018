#include <stdio.h>
int main() 
{
int N,i,j,m;
scanf("%d",&N);
printf("Input\n %d",N);
int a[N];
for(i=1;i<=N;i++)
{
scanf("%d",&a[i]);	
}
for(i=1;i<=N;i++)
{
for(j=i+1;j<=N;j++)
{
if(a[i]>a[j])
{
	m=a[i];
}
else
{
	m=a[j]; 
}
}
}
printf("\nOutput\n %d",m);
return 0;
}
