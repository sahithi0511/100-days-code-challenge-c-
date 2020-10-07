#include<stdio.h>
int remove_duplicates(int *arr,int n)
{
	int i;
	int a[100],j=0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			a[j++]=arr[i];
		
		}
	}
		a[j++]=arr[n-1];
	for(i=0;i<j;i++)
	{
		printf("%d\n",a[i]);
		arr[i]=a[i];
	}
	return j;
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	n=remove_duplicates(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
