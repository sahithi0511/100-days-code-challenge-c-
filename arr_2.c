#include<stdio.h>
void copy(int n,int * arr,int * b)
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i]=arr[i];
	}
}
int main()
{
	int arr[100],b[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&i[arr]);
	}
	copy(n,arr,b);
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
