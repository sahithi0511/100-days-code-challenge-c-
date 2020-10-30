#include<stdio.h>
int sort_rot(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			continue;
		}
		else if((arr[i-1]<arr[i]) && (arr[i]>arr[i+1]) && i>0)
		{
		//	printf("%d is j\n",j);
			j=i;
			break;
		}
		else
		{
			return 0;
		}
	}
	for(i=j+1;i<n;i++)
	{
		if(arr[i]<arr[0])
		{
			continue;
		}
		else
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=sort_rot(arr,n);
	if(n==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}
