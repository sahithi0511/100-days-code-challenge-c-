#include<stdio.h>
int leaders_array(int * arr,int n)
{
	int i,j,a[100],d=0,f=0;
	for(i=0;i<n;i++)
	{
		 if(i==n-1)
	  {
	  	a[d]=arr[i];
	  	d++;
	  	break;
	   } 
	  
	   for(j=i+1;j<n;j++)
	   {
	   	   if(arr[i]<arr[j])
	   	   {
	   	   	   f=0;
	   	   	   break;
	   	   	   
			  }
			  else
			  {
			    f=1;
			  }
	   }
	   if(f==1)
	   {
	   	a[d]=arr[i];
	   	d++;
	   	f=0;
	   }
	 
	   
	}
	for(i=0;i<d;i++)
	{
		arr[i]=a[i];
	}

	return d;
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=leaders_array(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
