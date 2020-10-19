#include<stdio.h>
int pattern_valid(int *arr,int n,int m,int k)
{
	int i,c=0,d=0,j,max=0,g=0,max1=0;
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	if(m==1)
	   	{
	   		if(arr[i]==arr[j])
	   {
	   	 // printf("%d %d",arr[i],arr[j]);
	   	   c=c+1;
	   	  // printf("%d %d\n",arr[i],arr[j]);
	   }
		  }
	   	
	   if(m>1)
	   {
	   	  if((arr[i] && arr[i+1])==(arr[j]&&arr[j+1]))
	   	  {
	   	  	
	   	  //	printf("%d %d %d %d\n",arr[i],arr[i+1],arr[j],arr[j+1]);
	   	  	g=g+1;
	   	  	j++;
			 }
	   }
	   
	   }
	   if(g>max1)
	   {
	   	max1=g;
	   	g=0;
	   }
	   if(g>max)
	   {
	   	max=g;
	   	g=0;
	   }	
	}
	if(g>=k)
	{
		return 1;
	}
	if(c>=k)
	{
		return 1;
	}
	
//	printf("%d",c);
}
int main()
{
	int n,arr[100],k,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&m,&k);
  n=pattern_valid(arr,n,m,k);
  if(n==1)
  {
  	printf("True");
  }
  if(n==0)
  {
  	printf("False");
  }
}
