#include<stdio.h>
int double_largenum(int *arr,int n)
{
	int i,j,max=0,index,f=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]>=max)
			{
				max=arr[i];
				index=i;
			
			}
		}
	}
	//	printf("%d %d",max,index);
	for(i=0;i<n;i++)
	{
		//printf("%d\n",index)
		if(i==index)
		{
			continue;
		}
		else if((arr[i]*2)<=max)
		{
		      f=0;	
		}
		else 
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		return index;
	}
	if(f==1)
	{
		return -1;
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
 n=	double_largenum(arr,n);
 printf("%d",n);
}
