#include<stdio.h>
void duplicate_zero(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			printf("%d %d\n",i,arr[i]);
			for(j=i;j<n;j++)
			{
				j=j+1;
				printf("%d %d is j\n",j,arr[j]);
			}
			arr[i+1]=0;
		
		}
			
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
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
	duplicate_zero(arr,n);
}
