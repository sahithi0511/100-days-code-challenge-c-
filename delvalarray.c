#include<stdio.h>
int  * del_val(int n,int *arr,int pos)
{
	int i,b[100],j;
	for(i=0;i<n;i++)
	{
	//	printf("%d ",arr[i]);
		if(i==pos)
		{
			//printf("%d %d %d\n",pos,i,arr[i]);
		
		//	printf("%d",i);
		  continue;	
		 // printf("%d\n",i);
		}
		else
		{
			
			b[i]=arr[i];
			printf("%d",b[i]);
		}
	}

	
}
int main()
{
	int n,arr[100],i,pos,*b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	del_val(n,arr,pos);
}
