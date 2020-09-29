#include<stdio.h>
int * even(int *arr,int n)
{
	return arr;
}
int main()
{
	int arr[100],n,*b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=even(arr,n);
	for(i=0;i<n;i++)
	{
	printf("%d",*(b+i));	
	}
	
}
