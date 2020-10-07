#include<stdio.h>
int rem_duplicate(int *arr,int n)
{
	int i,j=0,a[100],c;
	a[0]=arr[0];
	for(i=0,j=0;i<n;i++)
	{
		//printf("%d",arr[i]);
		if(arr[i]!=a[j])
		{
			j++;
			a[j]=arr[i];
//			c=j;
//			printf("j is %d\n",j);
//			while(c)
//			{
//				if(arr[i]==a[c])
//				{
//					printf("%d is arr[i] and %d is a[c]\n",arr[i],a[c]);
//					break;
//				}
//				else
//				{
//					c--;
//				}
//			}
		}
		else
		{
			
		}
	}
	for(i=0;i<j;i++)
	{
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
	n=rem_duplicate(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
