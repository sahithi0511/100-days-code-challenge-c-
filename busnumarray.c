#include<stdio.h>
int bus_num(int *arr,int n,int start,int dest)
{
	int i,sum=0,sum1=0;
	for(i=start;i<dest;i++)
	{
		sum=sum+arr[i];
	}
//	printf("%d is sum\n",sum);
	i=dest;
	while(start!=i && i<=n-1)
	{
		if(i==n)
		{
			i=0;
		}
		sum1=sum1+arr[i];
		i++;
	}
	//printf("%d is sum1",sum1);
	if(sum<sum1)
	{
		return sum;
	}
	else
	{
		return sum1;
	}
}
int main()
{
	int n,arr[100],i,start,dest;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&start,&dest);

	n=bus_num(arr,n,start,dest);
	printf("%d is the minimum distance path",n);
}
