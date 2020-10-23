#include<stdio.h>
int fun(int *arr,int n)
{
	int i,s=n,k=0,temp[100],m=0,f=0,z=0;
	for(i=0;i<n;i+=2)
	{
		temp[m++]=arr[i];
		if(i==n-1)
		{
			f=1;
		}
	}
//z=0 copy to arr; z=1 copy to temp; m is size of temp; n is size of arr
	while(1)
	{
		if(f==1)
		{
			k=1;
		}
		else
		{
			k=0;
		}
		if(z==0)
		{
			i=0;
			for(;k<m;k+=2)//1 3 5
			{
				arr[i++]=temp[k];
				if(k==m-1)
				{
					f=1;
				}
				else
				{
					f=0;
				}
			}
				
			z=1;
			n=i;
			
			if(n==1)
			{
				printf("hello%d",arr[0]);
				break;
			}
		}
		else
		{
			i=0;
			for(;k<n;k+=2)//1 3 5
			{
				temp[i++]=arr[k];
				if(k==n-1)
				{
					f=1;
				}
				else
				{
					f=0;
				}
				
			}
			
			z=0;
			m=i;
			
			if(m==1)
			{
				printf("hai%d",temp[0]);
				break;
			}
		}	
	}
}
int main()
{
	int n,arr[100],i,val;
	scanf("%d",&n);//5
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	val=fun(arr,n);
	//printf("%d",val);
}
