#include<stdio.h>
int delete_val(int *arr,int n,int val)
{
//write ur code here
int i,ar[100],j;
for(i=0,j=0;i<n;i++)
{
	printf("arr[i]=%d\n",arr[i]);
	if(arr[i]==val)
	{
		printf("%d went to continue",arr[i]);
		continue;
	}
	else{
		ar[i]=arr[i];
		j++;
		printf("%d is arr[j] and i is %d \n",ar[j],i);
	}
}

}

int main()
{
int arr[100],n,i,val;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&val);
n=delete_val(arr,n,val);//fun call
for(i=0;i<n;i++)
{
//printf("%d ",arr[i]);
}
return 0;
}
