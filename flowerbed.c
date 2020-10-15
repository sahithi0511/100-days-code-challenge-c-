#include<stdio.h>
int flower_bed(int *arr,int n,int n1)
{
	int i,a[100],d=0;
	for(i=0;i<n;i++)
	{
		
	     if(i==n1)
		 {
		 	if(n1==0)
		 	{
		 		return 1;
			 }
		 
			 
		 	  if(arr[i]==0 && arr[i+1]==0)
			   {
			     d++;

			   	return 1;
		 	
		
			 }	
	}
	
}
return 0;
}
int main()
{
	int n,arr[100],i,n1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	scanf("%d",&n1);
	n=flower_bed(arr,n,n1);
	if(n==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
