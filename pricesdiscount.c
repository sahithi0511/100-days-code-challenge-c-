#include<stdio.h>
void price_discount(int *arr,int n)
{
	int i,j,a[100],d=0,f=0;
	for(i=0;i<n;i++)
	{
			f=0;	
		for(j=i+1;j<n;j++)
		{
		
			if(i<j && arr[j]<=arr[i])
			{
				a[d]=(arr[i]-arr[j]);
				f=1;
				d++;
				//printf("%d %d %d\n",a[d],i,j);
				
				break;
			}
		    else
		    {
		    	continue;
			}
		}
		
	   if (f==0)
		{
			a[d]=arr[i];
		     d++;
			printf(" when f=0 %d %d\n",a[d],d);
		}
		
	}
	for(i=0;i<d;i++)
	{
		printf("%d",a[i]);
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
	price_discount(arr,n);
}
