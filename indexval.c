#include<stdio.h>
void index_val(int *num,int *index,int n)
{
	int i,j,k,a[100],d=0,e,f;
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
    
    		if(a[index[j]]==-1)
    		{
    			a[index[j]]=num[i];
    			//printf("%d\n",a[index[j]]);
			}
			else
			{
				for(k=n-1;k>=index[j];k--)
				{
					a[k+1]=a[k];
				}
			
				a[index[j]]=num[i];
				
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
