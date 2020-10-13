#include<stdio.h>
void index_val(int *num,int *index,int n)
{
	int i=0,a[100]={-1},d=0,k,e,f;
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(a[index[i]]==-1)
		{
			printf("%d is a[index[i]]\n",a[index[i]]);
			
	        a[index[i]]=num[i];
		}
		else
		{
	           d=index[i];
	           printf("%d\n",d);
	           
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[index[i]]);
	}
	 
}
int main()
{
	int num[100],index[100],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&index[j]);
	}
	index_val(num,index,n);
}
