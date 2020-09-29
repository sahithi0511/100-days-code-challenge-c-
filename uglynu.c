#include<stdio.h>
int calc(int n)
{
	
	if(n%2==0)
	{
		n=n/2;
		return n;
	}
	else if(n%3==0)
	{
		n=n/3;
		return n;
	}
	else if(n%5==0)
	{
		n=n/5;
		return n;
	}
	else {
		return 0;
	}
	
}
int ugly_nu(int n)
{
	int res;
	while(n>0)
	{
		         
		          if(n==1)
	{
	   return 1;
    }
	if(n==0)
	{
  	return 0;
     }
			 	 n=calc(n);
			 	printf("%d\n",n);
	}
	
	
//	 if(res)
//			 {
//			 	return 1;
//				 }	
//				 else
//				 {
//				 	return 0;
//				 }
	
}
int main()
{
	int n,n1,r;
	scanf("%d",&n);
	//n1=n;
	r=ugly_nu(n);
	if(r==1)
	{
		printf("ugly number");
	}
	else
	{
		printf("not ugly number");
	}
	
}
