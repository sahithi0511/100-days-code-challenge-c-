#include<stdio.h>
int is_prime(int n)
{
	int j;
	for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
				{
					//fi++;
					//printf("%d is not prime \n",n);
					return 0;
				}
				
			}
			return 1;
}
int sum_pro_prime(int n)
{
          int i,j,r;	 
	  	  for(i=2;i<=n/2;i++)
	  	  {
	  	  	   r=n-i;
	  	  	   if(is_prime(i)==0 && is_prime(r)==0)
	  	  	   {
	  	  	   	     printf("%d is i and %d is r\n",i,r);
	  	  	   	      for(j=2;j<r;j++)
	  	  	   	      {
	  	  	   	      	   if(r%j==0)
	  	  	   	      	   {
	  	  	   	      	   	   if(is_prime(j)==1 && is_prime(r/j)==1)
	  	  	   	      	   	   {
	  	  	   	      	   	   	          printf("%d is j and %d is r/j",j,(r/j));
	  	  	   	      	   	   	          return 1;
	  	  	   	      	   	   	         //printf("semiprime");
	  	  	   	      	   	   	         //break
										   }
										   
	  	  	   	      	   	   
									}
	  	  	   	      	   
	  	  	   	      	   
							 }
				   }
	  	  	   
			}
return 0;
	  
}
int main()
{
	int n,r;
	scanf("%d",&n);
	r=sum_pro_prime(n);
	if(r==1)
	{
		printf("semi prime");
	}
	else
	{
		printf("not a semi prime");
	}
}
