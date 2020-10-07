#include<stdio.h>
int asc_num(int n ,int *arr)
{
	int i,f=0,c=0,j,c1=0;
	
		for(i=0;i<n;i++)
	{
		//printf("%d",arr[i]);
	     if(arr[i]<arr[i+1])
	     {
	     	f=1;
	     	c=c+1;
		 }
		 else
		 {
		 	return 0;
		 }
	}
	if(f==1)
	{
		return 1;
	}
		
}


int main()
{
	int n,arr[100],i,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=asc_num(n,arr);
	if(res==1||res==2)
	{
		printf("True");
	}
	else{
		printf("False");
	}
	
		
}
