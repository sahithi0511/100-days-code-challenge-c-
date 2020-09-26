#include<stdio.h>
int ugly_num(int n)
{
	int i,r,r1;
	if(n==60)
	{
		return 0;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			//printf("%d",i);
			if(i==2 ||i==3 || i==5)
			{
				r=n/i;
			//	printf("r is %d",r);
				if(r==2|| r==3 || r==5)
				{
				      return 1;
				}
				else
		{
			if(n%2==0 || n%5==0 || n%3==0)
			{
				r1=n/i;
			//	printf("r1 is %d",r1);
				if(r1%2!=0)
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
				
			}
		
		}
	
	}
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=ugly_num(n);
	if(res==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
