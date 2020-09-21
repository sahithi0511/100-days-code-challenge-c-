#include<stdio.h>
#include<math.h>
void abundant_number(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum>(n*2) || ((sum-n)>n))
		{
			printf("Abundant number");
		}
		else
		{
			printf("Not Abundant Number");
		}
}
int main()
{
	int n;
	scanf("%d",&n);
	abundant_number(n);
}
