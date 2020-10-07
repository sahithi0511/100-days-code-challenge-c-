#include<stdio.h>
int  move_zeros(int *arr,int n)
{
	int a[100],i,j=0,c;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			c++;
			//printf("c is %d",c);
		}
		else{
			a[j++]=arr[i];
		}
	}
	
	for(i=0;i<j;i++)
	{
		arr[i]=a[i];
	}
	while(i<n)
	{
		arr[i]=0;
		i++;
	}
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	n=move_zeros(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
