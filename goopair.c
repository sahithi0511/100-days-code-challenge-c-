#include<stdio.h>
int good_pair(int *arr,int n)
{
	int i,j,c=0;;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i]==arr[j]&& (i<j))
			{
				c++;
			    
			}
		}
	
		
	}
		return c;
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=good_pair(arr,n);
	printf("%d",n);
	
}
