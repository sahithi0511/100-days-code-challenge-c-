#include<stdio.h>
int min(int l,int r)
{
	if(l<r)
	{
		return l;
	}
	else
	{
		return r;
	}
}
void bucket_fill(int *arr,int n)//5 0 6 2 3
{
   int l[100],r[100],i,j,k,max=0,max1=0,c,sum=0;
   for(i=0;i<n;i++)
   {
   	max=0;
   	max1=0;
	for(j=0;j<=i;j++)
		{
		//	printf("%d is i\n",i);
		if(i==0)
   	      {
   	  	  l[i]=arr[i];
   	  	  break;
   	  	 // printf("%d isl[i]\n",l[i]);
		 }
		else if(arr[i]<=arr[j] && max<arr[j])//3 2 5 1 2
			{
				max=arr[j];
				//printf("%d %d\n",arr[i],max);
			}
				l[i]=max;
			}
			for(k=i;k<n;k++)
			{
				//printf("%d is i\n",i);
				if(i==n-1)
		       {
		       //	printf("%d is i\n",i);
		 	   r[i]=arr[i];
		 	   break;
		      }
				else if(arr[i]<=arr[k] && max1<arr[k])
				{
					max1=arr[k];
				}
					r[i]=max1;
				}
			
			
				
		 
//printf("%d %d %d\n",l[i],arr[i],r[i]);
		 
   }
   for(i=0;i<n;i++)
   {
   	c=min(l[i],r[i])-arr[i];
   	sum=sum+c;
   }
   	printf("%d",sum);
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bucket_fill(arr,n);
}
