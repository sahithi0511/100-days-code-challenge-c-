#include<stdio.h>
int remove_val(int *arr,int n,int val)
{
	int i,a[100],j=0;
	for(i=0;i<n;i++)
	{
		//printf("%d %d\n",arr[i],val);
		if(arr[i]==val)
		{
		//	printf("%d %d\n",arr[i],val);
			continue;
		}
		else
		{
			a[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		//printf("%d",a[i]);
		arr[i]=a[i];
	}
	return j;
}
int main()
{
	int n,arr[100],val,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	n=remove_val(arr,n,val);
     printf("%d",n);
     return 0;
}
