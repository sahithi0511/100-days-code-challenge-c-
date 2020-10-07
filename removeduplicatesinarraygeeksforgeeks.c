#include<stdio.h>
int removeDuplicates(int arr[], int n) 
{ 
    
    if (n==0 || n==1)
	{
		return n; 
	 } 
        
  
    int a[n];  
    int i,j = 0; 
    for ( i=0; i<n-1; i++) 
    {
         if (arr[i] != arr[i+1]) 
            a[j++] = arr[i]; 	
	} 
    a[j++] = arr[n-1]; 
    for ( i=0; i<j; i++) 
    {
    	 arr[i] = a[i]; 
  
}
       
    return j; 
} 
int main() 
{ 
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
  
    // removeDuplicates() returns new size of 
    // array. 
    n = removeDuplicates(arr, n); 
  
    // Print updated array 
    for (i=0; i<n; i++) 
    {
    	printf("%d",arr[i]);
	}
      
  
    return 0; 
} 
