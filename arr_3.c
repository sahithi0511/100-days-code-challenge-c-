#include<stdio.h>
#include<stdlib.h>
int * insert(int *arr,int n,int pos,int val)
{
	int i,j;
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
		//printf("%d\n",i);
	}
	arr[pos]=val;
	return arr;
}
int main()
{
	int n,arr[100],val,pos,*b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	b=insert(arr,n,pos,val);
	for(i=0;i<=n;i++)
	{
		printf("%d ",b[i]);
	}
}
