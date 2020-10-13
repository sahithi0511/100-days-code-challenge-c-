#include<stdio.h>
int length_sortedarray(int *arr,int n)
{
	int i,j,a[100],c=0,pos1,pos2;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c++;
			arr[i]=arr[i]+arr[j];
			arr[j]=arr[i]-arr[j];    
            arr[i]=arr[i]-arr[j];
            break;
            
            }	
	    }
		
	}
    return c;
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=length_sortedarray(arr,n);
	printf("%d",n);
	}
