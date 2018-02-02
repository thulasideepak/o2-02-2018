#include<stdio.h>
int main()
{
    int n,b[10],i,num,j,k,temp;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=1;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(b[j]>b[k])
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
                printf("%d",b[j]);
                
            }
        }  
    n=((n+1)/2)-1;
    printf("%d",n);
    }
    return 0;
}
