#include<stdio.h>
void bucket_fill(int *arr,int n)
{
	int i,j,k,max=0,max1=0,sum=0,c,c1;
	for(i=1;i<n-1;i++)
	{
	    for(j=1;j<i;j++)
		{
			if(arr[i]<arr[j] && max<arr[j])//3 2 5 1 2
			{
				max=arr[j];
			}
			}
			for(k=i+1;k<n-1;k++)
			{
				if(arr[i]<arr[k] && max1<arr[k])
				{
					max1=arr[k];
				}
				}
				printf("%d %d\n",max,max1);
	if(max<max1)
	{
		 c=max-i;
		 if(c>0)
		 {
		 	sum=sum+c;
		 }
		
	}
	else
	{
	   c1=max1-i;
	   if(c1>0)
	   {
	   	sum=sum+c1;
	   }
	}
					
	}
	printf("%d",sum);
	
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bucket_fill(arr,n);
}
