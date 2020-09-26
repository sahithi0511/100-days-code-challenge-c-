#include<stdio.h>
int number(int i)
{
	if(i==2 || i==3 || i==5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int ugly_number(int n)
{
	int i=1,s1,c,res=1;
	
	for(i=2;i<n;i++)
	{
		
		if(n%i==0)
		{
			res=res*i;
			if(number(i))
			{
			
				c=n/i;
				if(number(c))
				{
					printf("ugly number");
					break;
				}
				else if(c%2==0)
				{
				  res=res*i*2;	
				  if(number(res))
				  {
				  		printf("ugly number");
					break;
				  }
				}
				else if(c%3==0)
				{
					res=res*i*3;
					 if(number(res))
				  {
				  		printf("ugly number");
					break;
				  }	
				}
				else if(c%5==0)
				{
					res=res*i*5;
					 if(number(res))
				  {
				  		printf("ugly number");
					break;
				  }	
				}
			}
		}
		printf("not ugly number");
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	ugly_number(n);
}
