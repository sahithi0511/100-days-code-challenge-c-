#include<stdio.h>
int address_val(int *arr,int n,int val1)
{
	int i,a[105],d=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val1 )
		{
			if(d==0)
			{
					a[d]=i;
					d++;
			}
			else if(d>0 && arr[i+1]!=val1)
			{
				//printf("%d %d",d,(i+1));
				
			   a[d]=i;
			   d++;	
			}
			else
			{
				continue;
			}
		//	printf("%d is arr[i] and  %d is val \n",arr[i],val1);
		
		//	printf("%d\n",a[d]);
			
		}
		else
		{
			continue;
		}
	}
    // printf("%d",d);
	if(d==0)
	{
		while(d<2){
			a[d]=-1;
			d++;
		}
	}
	for(i=0;i<d;i++)
	{
		arr[i]=a[i];
	}
	return d;
}
int main()
{
	int n,arr[100],val1,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val1);
	n=address_val(arr,n,val1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
