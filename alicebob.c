#include<stdio.h>
int alice_bob(int n)
{
	int alice=1,bob=0,i;
	while(1)
	{
		for(i=1;i<=n;i++)
		{
		  alice=i;
		  bob=i*2;
		   if(n==alice)
		   {
		   	return 1;
		}
		else if(n==bob)
		{
			return 0;
		}
			
		}
	}
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=alice_bob(n);
	if(res==1)
	{
		printf("Bob");
	}
	else if(res==0)
	{
		printf("Alice");
	}
}
