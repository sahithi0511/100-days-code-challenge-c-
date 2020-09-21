#include<stdio.h>
void pattern(int n)
{
	int i,j,num=n;
	for(i=n;i>=1;i--)
	{
		num=n;
		for(j=n;j>=1;j--)
		{
		   
			if(j<=n/2)
			{  
			   
			    
				printf("%d",num);
				num=num-1;
				 
				
				
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pattern(n);
}
