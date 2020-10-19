#include<stdio.h>
int target_index(int *arr,int n,int target)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(target==arr[i])
		{
		     return i;
		}
		else
		{
			if(target<arr[i])
			{
				return i;
			}
		}
	}
}
int main()
{
	int n,arr[100],i,target;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&target);
  n=target_index(arr,n,target);
  printf("%d",n);
   
}
