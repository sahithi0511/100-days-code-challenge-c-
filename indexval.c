#include<stdio.h>
void index_val(int *num,int *index,int n)
{
	int i=0,a[100],d=0,k,e,f;
	for(i=0;i<n;i++)
	{
	//	printf("%d %d\n",num[i],index[i]);
	    f=index[i];
		//a[d]=num[i];
		//printf("%d %d\n",f,d);
		while(d<n)
		{
		      if(f==d)
		{
			a[d]=num[i];
			break;
		}
		else
		{
			d++;
		}	
		}
		
		
		printf("%d ",a[d]);
	  //printf("%d  is a[f]\n",index[i]);
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
