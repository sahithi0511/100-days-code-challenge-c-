#include<stdio.h>
int max_duplicatezeros(int *arr,int n)
{
	int i,j,k,a[100],f=0;
	for(i=0,j=0;i<n;i++)
	{
		f=0;
		for(k=0;k<j;k++)
		{
			if(arr[i]>a[k])
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{ 
		    a[j]=arr[i];
		    printf("%d",arr[j]);
			
		}
	}
	return j;
}
int main()
{
	int n,arr[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=max_duplicatezeros(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
