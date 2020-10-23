#include<stdio.h>
void ranking_array(int *arr,int n)
{
	int i,a[100],j,d=0,c=1;
	for(i=0;i<n;i++)//30 20 10 40 50
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c=c+1;
			}
		}
		a[d]=c;
		c=1;
		d++;
	}
	for(i=0;i<d;i++)
	{
		printf("%d ",a[i]);
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
	ranking_array(arr,n);
}


// 5
//30 25 33 10 40
// 
