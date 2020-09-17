#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int big(int i,int j)
{
	if(i>j)
	{
		return i;
	}
	else{
		return j;
	}
}
int main() 
{

    int n,i,j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  //	while(n>=1)
  //	{
  		for(i=-n+1;i<n;i++)
  	{
  		//printf("%d",n);
  		for(j=-n+1;j<n;j++)
  		{
  			//printf("%d",n);
  		
  				printf("%d ",big(abs(i),abs(j))+1);
			  
  			//printf("%d",n);
  		
		  }
		 // n=n-1;
  		
		 printf("\n");
  		
	  }
  		
	 // }
  	
    return 0;
}
