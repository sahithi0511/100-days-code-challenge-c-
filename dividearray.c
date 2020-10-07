#include<stdio.h>
int divide_array(int *arr,int n)
{
	int i,j,a[100],b[100],k,l,c=0,d[100];
	for(i=0;i<n/2;i++)
	{
		a[i]=arr[i];
	//	printf("arr[i] is %d\n",a[i]);
	}
	for(j=n/2;j<n;j++)
	{
		b[j]=arr[j];
		//printf("arr[j] is %d\n",b[j]);
	}
	for(k=0;k<n;k++)
	{
		if(k==(n/2))
		{
			break;
		}
		if(k<n)
		{
			d[c]=a[k];
		//	printf("%d is a[k]\n",d[c]);
			c++;
			d[c]=b[k+(n/2)];
		//	printf("%d is b[k]\n",d[c]);
			c++;
		}
	}
	for(l=0;l<n;l++)
	{
		//printf("%d",d[l]);
		arr[l]=d[l];
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
	n=divide_array(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
