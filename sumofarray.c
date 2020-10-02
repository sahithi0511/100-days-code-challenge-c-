#include<stdio.h>
int sum_arr(int *arr,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		
		sum=sum+arr[i];
		
	}
	return sum;
}
int main()
{
	int n,arr[100],*b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=sum_arr(arr,n);
	printf("%d",b);

}
