#include<stdio.h>
void super_prime(int n)
{
	int i,f=0,j,k,fact,total,count=0,big=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==0)
	{
	//	printf("prime");
for(j=1; j<n; j++)
    {
        fact=0;
        for(k=1; k<n; k++)
        {
            if(j%k==0)
                fact++;
                
        }
        
        if(fact==2)
        {
        	printf("%d ",j);
        	count=j;
        	 while(count)
        	 {
        	 	if(big<count)
        	 	{
        	 		big=count;
        	 		count=count-1;
        	 		 printf("%d ",big);
				 }
			 }
			 printf("%d ",big);
        //	printf(" prime number is %d and count is %d " ,j,count);
        	
	}
         // count++;
         // printf("%d ",count);
          
        // printf("%d ",++count);
           
           // count++;
            //printf("%d ",count);
            //printf("%d",count);
            
    }
    
	}
	else
	{
		printf("not prime");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	super_prime(n);
}
