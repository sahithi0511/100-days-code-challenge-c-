#include<stdio.h>
void greatest_num(int*arr,int n,int n1)
{
	int i,j,a[100],max=0,d=0,c;
	
	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		if(arr[i]>max)
	  		{
	  		//	printf("%d is arr[i] and %d is arr[j]\n",arr[i],arr[j]);
	  			max=arr[i];
	  		
			  }
		  }
		  
	  }
	  	//printf("%d\n",max);
	  	for(i=0;i<n;i++)
	  	{
	  		if((arr[i]+n1)>=max)
	  		{
	  			a[i]=1;
			  }
			  else{
			  	a[i]=0;
			  }
		  }
		  for(j=0;j<n;j++)
		  {
		  	printf("%d ",a[j]);
		  }
	  	
	}
	

int main()
{
	int n,n1,arr[100],i;
	scanf("%d%d",&n,&n1);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	greatest_num(arr,n,n1);
}
