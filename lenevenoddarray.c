#include<stdio.h>
void len_evenodd(int *arr,int n)
{
	int i,n1=0,c=1,f=0,g=0,max=c;
	for(i=n1;i<n;i=i+2)//1 4 6 1 2 7//1 2 4 3 8
	{
		if(arr[n1]%2==0)
		{
		    f=1;
		    if(arr[i]%2==0 && arr[i+1]%2!=0 && g==0)
		    {
		    	c=c+2;
		    	//printf("%d",c);
			}
			if(i==n-1)
			{
				c=c+1;
			}
				
		}
		else if(arr[0]%2!=0 && f==0)
		{
			g=1;
			if(arr[i]%2!=0 && arr[i+1]%2==0)
			{
				c=c+2;
			//	printf("%d is c in odd",c);
			}
			if(i==n-1)
			{
				c=c+1;
			}
		}
		else
		{
			n1=n1+1;
			
			c=1;
			f=0;
			g=0;
		}
		if(max<=c)
			{
				max=c+1;
			}
	}
	printf("%d",max);
}

int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	len_evenodd(arr,n);
}
