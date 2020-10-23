#include<stdio.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int dupli_num(int *arr,int n,int j)
{
	if(j==n-1)
	{
		return 0;
	}
	if(arr[j]==arr[j+1])
	{
		return 1;
	}
	else
	{
	     dupli_num(arr,n,j+1);	
	}
}
int main()
{
	int n,arr[100],i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr, n, sizeof(int), cmpfunc);
	n=dupli_num(arr,n,j);
	if(n==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
