#include<stdio.h>
int * sum_arr(int *arr,int n,int *sum)
{
	int i,s=0,a[100];
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

     	
	return s;
}
int main()
{
	int n,arr[100],*b,i,sum[1];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=sum_arr(arr,n,sum);
    printf("%d",b);
    printf("%d",sum);
	

}
