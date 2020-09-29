#include<stdio.h>
void insert(int n,int *arr,int pos,int val)
{
	int i;
	if(pos>n-1)
	{
		arr[n]=val;
	}
	else
	{
	for(i=n-1;i>=pos;i--)
	{
		
		arr[i+1]=arr[i];
	}
	arr[pos]=val;
	}

	
}
int main()
{
	int n,arr[10],pos,i,val;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	insert(n,arr,pos,val);
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
}
