#include<stdio.h>
void murder_person(int *arr,int n)
{
	int i,a[100],d=0;
	
	for(i=0;i<n;i+=2)
	{
		a[d]=arr[i]	
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
	murder_person(arr,n);
}
