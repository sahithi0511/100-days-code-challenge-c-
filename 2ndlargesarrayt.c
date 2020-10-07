#include<stdio.h>
int  Largest_smallest_arr(int n,int *arr)
{
	int i,l=0,max=0,j,k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];

		//	printf("%d \n",l);
		   	
		}
}
for(j=0;j<n;j++)
{
	
//	printf("%d",l);
	
	if(arr[j]<l)
	{
		if(arr[j]>max)
		{
			max=arr[j];
		
		}
		
	}
}
	
	return max;
}
int main()
{
	int n,arr[10],i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=Largest_smallest_arr(n,arr);
     printf("%d",b);
	
	
	
}
