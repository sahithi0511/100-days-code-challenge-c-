#include<stdio.h>
void index_val(int *num,int *index,int n)
{
	int i,j,a[100],d=0,k,e,f;
	for(i=0;i<n;i++)
	{
	//printf("%d ",a[index[i]]);
	  a[i]=-1;
	  //printf("%d %d\n",a[index[i]],a[i]);
	}
	for(j=0;j<n;j++)
	{
	   if(a[i]==-1)
	   {
	   	a[index[i]]=num[i];
	    }
	    
			
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
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
