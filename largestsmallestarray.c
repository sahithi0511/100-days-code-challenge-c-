#include<stdio.h>
int * Largest_smallest_arr(int n,int *arr)
{
	int i,l[10]={0,32767};
	for(i=0;i<n;i++)
	{
		if(arr[i]>l[0])
		{
			l[0]=arr[i];
		   	
		}
		if(arr[i]<l[1])
		{
			printf("Smallest is %d  ",l[1]);
			l[1]=arr[i];
			printf("Smallest is %d  ",l[1]);
			
		}
		
	}

    return l;
	

}
int main()
{
	int n,arr[10],i,*b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=Largest_smallest_arr(n,arr);
	for(i=0;i<=1;i++)
	{
	//	printf("%d ",*(i+b));
	}
	
	
	
}
