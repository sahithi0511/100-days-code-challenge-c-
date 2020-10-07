#include<stdio.h>
int large_countarr(int *arr,int n)
{
	int i,j,k,a[100],c=0,d=0;
	for(i=0;i<n;i++)
	{
			c=0;
		for(j=0;j<n;j++)
		{
		
			if(arr[i]>arr[j])
			{
				c++;
			//	printf("%d is count for %d \n",c,arr[i]);
				
				
			}
		
		}
		//	printf("\t %d is final count count for %d\n",c,arr[i]);
			a[d]=c;
			d++;
	}
	for(k=0;k<n;k++)
	{
	//	printf("%d",a[k]);
		arr[k]=a[k];
	}

}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=large_countarr(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
