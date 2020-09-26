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
int semi_prime(int n)
{
	int i,j,r1,r,r2;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("1st n is %d and i is %d \n",n,i);
			if(is_prime(i))
			{
				r=n/i;
				printf("r is %d\n",r);
				if(is_prime(r%i && r/i))
				{
				    r1=n-(r*i);
				    	printf("r1 is %d \n",r1);
					for(j=2;j<r1;j++)
					{
						printf("1st r1 is %d and j is %d \n",r1,j);
						if(r1%j==0)
						{
							if(is_prime(j))
							{
								r2=r1/j;
									printf("r2 is %d \n",r2);
								if(is_prime(r2))
								{
								printf("r2 is %d \n",r2);
									return 1;
								}
							}
							else
							{
								continue;
							}
						}
						}	
				}
			}
		}
	}
	
}
int main()
{
	int c,i,n,res;
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		scanf("%d",&n);
		res=semi_prime(n);
		if(res==1)
		{
			printf("yes");
		}
		else
		{
			printf("No");
		}
	}
}
