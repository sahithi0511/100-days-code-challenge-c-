#include<stdio.h>
int * sum_arr(int *arr,int n)
{
	int i,s=0,a[100],sum=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		  sum=sum+1;
			
		}
		else
		{
		  s=s+1;
		}
		
		
		
	}
	a[0]=sum;
	a[1]=s;
	return a;

     	
//	return s;
}
int main()
{
	int n,arr[100],*b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=sum_arr(arr,n);

	
		printf("%d ",b[0]);
		printf("%d",b[1]);
	
    
	

}
