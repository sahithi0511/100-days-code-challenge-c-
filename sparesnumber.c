#include<stdio.h>
void consecutive_binary(int n)
{
	int r,f=0;
	while(n)
	{
		r=n&1;
		printf("%d \n",r);
		if(r==1)
	{
	//	printf("%d \n",n&&1);
	//	printf("%d \n",n);
		n=n>>1;
	   printf("%d",n);
		if(n&1==1)
		{
			printf("Not a sparese number");
			f=1;
			break;
		}
		else{
			n=n>>1;
		}
		
	}
	else{
			f=0;
		n=n>>1;
	}
		
	}
	if(f==0)
	{
		printf("Sparse number");
	}
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	consecutive_binary(n);
}
