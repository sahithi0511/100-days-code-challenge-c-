#include<stdio.h>
void stock_buysell(int *arr,int n)
{
	int i,j,sum,f=0,profit=0,d,max;
	while(i<n)
	{
		i=0;
		d=i+1;
		while(d)
		{
			if(arr[i]<arr[d] && f==0)
			{
				max=arr[d];
				f=1;
			}
			else
			{
				if(max<arr[d])
				{
					max=arr[d];
				}
				else if(max>arr[d])
				{
					i=d+1;
					break;
				}
			}
			d++;
		}
		sum=max-arr[d];
		profit=profit+sum;
		
	}
	printf("%d",profit);
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	stock_buysell(arr,n);
}
//2 1 3 5 3 8 12
//4+9=13
