#include<stdio.h>
int * delete_val(int *arr,int n,int val)
 {

 //write ur code here
 	int i,b[100],j;
	for(i=0;i<n;i++)
	{
	//	printf("%d ",arr[i]);
		if(i==val)
		{
			//printf("%d %d %d\n",pos,i,arr[i]);
		
		//	printf("%d",i);
		  continue;	
		 // printf("%d\n",i);
		}
		else
		{
			
			b[i]=arr[i];
		//	printf("%d",b[i]);
		}
	}
	printf(" j is %d and b is %d\n",j,b);
	n=j;
	arr=b;
	return arr;

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
 printf("%d ",arr[i]);
 }
return 0;
 }




