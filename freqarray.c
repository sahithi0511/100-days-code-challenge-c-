#include<stdio.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
void freq_array(int *arr,int n)
{
	int i,j,a[100],d=0,c=0,b[100],k=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c=c+1;
				//printf("%d is arr[i]",arr[i]);
				a[d]=c+1;
		       printf(" %d %d \n ",arr[i],a[d]);
		        d++;
			}
			if
			
		}
		
		
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
	qsort(arr, n, sizeof(int), cmpfunc);
	freq_array(arr,n);
}
