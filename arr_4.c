#include<stdio.h>
int   del_val(int n,int *arr,int pos,int *b)
{
	int i,j,*r;
	for(i=0;i<n;i++)
	{
		
	//	printf("%d ",arr[i]);
		if(arr[i]==pos)
		{
			//printf("%d %d %d\n",pos,i,arr[i]);
		
		//	printf("%d",i);
		  continue;	
		 // printf("%d\n",i);
		}
		else
		{
			
			b[i]=arr[i];
			
		//	printf("%d",b[i]);
		}
	}
//	j=res(b,&n);
//	printf("%d is j",j);
//	return j;

	
}
int main()
{
	int n,arr[100],i,pos,b[100],*k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	del_val(n,arr,pos,b);
//	printf("%d is k",k);

//	printf("%d is n",n);
	for(i=0;i<n;i++)
	{
     if(b[i]==0)
 {
	 continue;
		}
		else
		{
			printf("%d",b[i]);
				}		
	
	
	}
}
