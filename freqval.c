#include<stdio.h>
int freq_val(int *arr,int n)
{
	int i,a[100],k=0,d,c=0;
	for(i=0;i<n;i=i+2)
	{
		if(i%2==0)
		{
			d=arr[i];
			while(d!=0)
			{
			  a[k]=arr[i+1];
			  k++;
			  d--;	
			  c++;
			}
		}
	}
	//printf("%d\n",c);
	for(i=0;i<c;i++)
	{
	//	printf("%d",a[i]);
		arr[i]=a[i];
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
	n=freq_val(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}
