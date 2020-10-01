#include<stdio.h>
#include<stdlib.h>
void *copy(int n,int * arr)
{
	int i,*b;
	b=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		b[i]=arr[i];
		printf("%d\n",b[i]);
	}
}
int main()
{
	int *arr,b[100],n,i;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
    scanf("%d",&arr[i]);
	copy(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
