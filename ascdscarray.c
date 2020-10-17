#include<stdio.h>
 int fun(int *arr,int n)
{
     int i,j,f=0,k=0,g;
     for(i=0;i<n;i++)
     {
     	for(j=i+1;j<n;j++)
     	{
     		if(arr[i]<arr[j] &&g!=0)
     		{
     			f=1;
     			continue;
     			
     			
			 }
			 else if(arr[i]>arr[j]&& f==0)
			 {
			 	g=0;
			 	continue;
			 }
			 else
			 {
			 	//return 0;
			    k=1;
			 	break;
			 }
			 
		 }
	 }
	 if(k==1)
	 {
	 	printf("False");
	 }
	 else
	 {
	 	printf("True");
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
printf("%d",fun(arr,n));
 return 0;
 }


