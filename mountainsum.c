#include<stdio.h>
int mountain_sum(int *arr,int n)
{
	int i,f=0,g=0;
	if(n<3)
	{
		return 0;
	}
	else
	{
		for(i=0;i<n-1;i++)//3 6 5 6 7 6 5 3 0
		{
			if((arr[i]<arr[i+1])&&(g==0))
			{
				f=1;
			}
			else if((arr[i]>arr[i+1])&&(f==1))
			{
				g=1;
			}
			else
			{
			  return 0;
			}
		}
		if(f==1 && g==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=mountain_sum(arr,n);
	if(n==1)
	{
		printf("True");
	}
	if(n==0)
	{
		printf("False");
	}
}
